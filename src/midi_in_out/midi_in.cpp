#include "midi_in.hpp"

MidiInput::MidiInput(MidiOutput* output, Ui* dr)
{
    quantity_of_devices = midiInGetNumDevs() - 1;

    // MIDIHDR initialization 
    phm.lpData = lpDataArr;
    phm.dwBufferLength = sizeof(lpDataArr);
    phm.dwFlags = 0;

    hm = nullptr;

    out = output;
    inter = dr;

    objectcs_ptr = {out, inter};
}

MidiInput::~MidiInput()
{
    midiInUnprepareHeader(hm, &phm, sizeof(phm));
    midiInStop(hm);

    #ifdef DEBUG
        std::cout << "MidiInput: Destructor" << std::endl;
        std::cout << '\n';
    #endif
}

void CALLBACK MidiInput::MidiInProc(HMIDIIN hMidiIn, UINT wMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
    //    MidiOutput* output_cb = (MidiOutput*)dwInstance;

    MidiOut_UI* objectcs = (MidiOut_UI*)dwInstance;

    objectcs->first->play_a_note(dwParam1);

    objectcs->second->start(dwParam1);

    #ifdef DEBUG
        std::cout << std::hex;

        switch (wMsg) 
        {
        case MIM_OPEN:
            std::cout << "MIM_OPEN" << std::endl;
            break;
        case MIM_CLOSE:
            std::cout << "MIM_CLOSE" << std::endl;
            break;
        case MIM_DATA:
            std::cout << "MIM_DATA: ";
            std::cout << "dwInstance = " << dwInstance << " | dwParam1 = " << dwParam1 << std::dec << " | dwParam2 = " << dwParam2 << std::endl;
            break;
        case MIM_LONGDATA:
            std::cout << "MIM_LONGDATA" << std::endl;
            break;
        case MIM_ERROR:
            std::cout << "MIM_ERROR" << std::endl;
            break;
        case MIM_LONGERROR:
            std::cout << "MIM_LONGERROR" << std::endl;
            break;
        case MIM_MOREDATA:
            std::cout << "MIM_MOREDATA" << std::endl;
            break;
        default:
            std::cout << "unknown" << std::endl;
            break;
        }
    #endif
}

void MidiInput::midiCapabilities()
{
    result = midiInGetDevCaps(quantity_of_devices, &data, sizeof(data));
    switch (result)
    {
    case MMSYSERR_BADDEVICEID:
        std::cerr << "MidiInGetDevCaps: The specified device identifier is out of range" << std::endl;
        assert(false);
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInGetDevCaps: The specified pointer or structure is invalid" << std::endl;
        assert(false);
    case MMSYSERR_NODRIVER:
        std::cerr << "MidiInGetDevCaps: The driver is not installed" << std::endl;
        assert(false);
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInGetDevCaps: The system is unable to allocate or lock memory" << std::endl;
        assert(false);
    default:

        #ifdef DEBUG
            std::cout << "MidiInGetDevCaps: successful" << std::endl;
        #endif

        break;
    }

    #ifdef DEBUG
        std::cout << '\n';
    #endif
}

void MidiInput::openMidiDevice()
{
    result = midiInOpen(&hm, quantity_of_devices, (DWORD_PTR)MidiInput::MidiInProc, (DWORD_PTR)&objectcs_ptr, CALLBACK_FUNCTION);
    switch (result)
    {
    case MMSYSERR_ALLOCATED:
        std::cerr << "MidiInOpen: The specified resource is already allocated" << std::endl;
        assert(false);
    case MMSYSERR_BADDEVICEID:
        std::cerr << "MidiInOpen: The specified device identifier is out of range" << std::endl;
        assert(false);
    case MMSYSERR_INVALFLAG:
        std::cerr << "MidiInOpen: The flags specified by dwFlags are invalid" << std::endl;
        assert(false);
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInOpen: The specified pointer or structure is invalid" << std::endl;
        assert(false);
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInOpen: The system is unable to allocate or lock memory" << std::endl;
        assert(false);
    default:
    
        #ifdef DEBUG
            std::cout << "MidiInOpen: successful" << std::endl;
        #endif

        break;
    }

    #ifdef DEBUG
        std::cout << '\n';
    #endif
}

void MidiInput::midiBufferReady()
{
    result = midiInPrepareHeader(hm, &phm, sizeof(phm));
    switch (result)
    {
    case MMSYSERR_INVALHANDLE:
        std::cerr << "MidiInPrepareHeader: The specified device handle is invalid" << std::endl;
        assert(false);
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInPrepareHeader: The specified address is invalid" << std::endl;
        assert(false);
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInPrepareHeader: The system is unable to allocate or lock memory" << std::endl;
        assert(false);
    default:
        #ifdef DEBUG
            std::cout << "MidiInPrepareHeader: successful" << std::endl;
        #endif
        break;
    }

    #ifdef DEBUG
        std::cout << '\n';
    #endif

    result = midiInAddBuffer(hm, &phm, sizeof(phm));
    switch (result)
    {
    case MIDIERR_STILLPLAYING:
        std::cerr << "MidiAddBuffer: The buffer pointed to by lpMidiInHdr is still in the queue" << std::endl;
        assert(false);
    case MIDIERR_UNPREPARED:
        std::cerr << "MidiAddBuffer: The buffer pointed to by lpMidiInHdr has not been prepared" << std::endl;
        assert(false);
    case MMSYSERR_INVALHANDLE:
        std::cerr << "MidiAddBuffer: The specified device handle is invalid" << std::endl;
        assert(false);
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiAddBuffer: The specified pointer or structure is invalid" << std::endl;
        assert(false);
    case MMSYSERR_NOMEM:
        std::cerr << "MidiAddBuffer: The system is unable to allocate or lock memory" << std::endl;
        assert(false);
    default:
        #ifdef DEBUG
            std::cout << "MidiAddBuffer: successful" << std::endl;
        #endif
        break;
    }

    #ifdef DEBUG
        std::cout << '\n';
    #endif
}

void MidiInput::record()
{
    midiCapabilities();

    openMidiDevice();

    midiBufferReady();

    // start
    midiInStart(hm);

    hold();
}

void MidiInput::hold()
{   
    std::cout << "Press Enter to stop" << "\n\n";
    std::cin.get();
}