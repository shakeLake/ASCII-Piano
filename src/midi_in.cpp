#include "midi_in.hpp"

MidiInput::MidiInput()
{
    quantity_of_devices = midiInGetNumDevs() - 1;

    // MIDIHDR initialization 
    phm.lpData = lpDataArr;
    phm.dwBufferLength = sizeof(lpDataArr);
    phm.dwFlags = 0;

    hm = nullptr;
}

MidiInput::~MidiInput()
{
    midiInUnprepareHeader(hm, &phm, sizeof(phm));
    midiInStop(hm);

    std::cout << "Destructor" << std::endl;

    std::cout << '\n';
}

void CALLBACK MidiInput::midiCallBack(HMIDIIN hMidiIn, UINT wMsg, DWORD dwInstance, DWORD dwParam1, DWORD dwParam2)
{  
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
        std::cout << "dwInstance = " << dwInstance;
        std::cout << std::hex;
        std::cout << " | dwParam1 = " << dwParam1;
        std::cout << std::dec;
        std::cout << " | dwParam2 = " << dwParam2 << std::endl;
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
}

int MidiInput::midiCapabilities()
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
        std::cout << "MidiInGetDevCaps: successful" << std::endl;
        break;
    }

    std::cout << '\n';

    return 0;
}

int MidiInput::openMidiDevice()
{
    result = midiInOpen(&hm, quantity_of_devices, (DWORD_PTR)MidiInput::midiCallBack, 0, CALLBACK_FUNCTION);
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
        std::cout << "MidiInOpen: successful" << std::endl;
        break;
    }

    std::cout << '\n';

    return 0;
}

int MidiInput::midiBufferReady()
{
    result  = midiInPrepareHeader(hm, &phm, sizeof(phm));
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
        std::cout << "MidiInPrepareHeader: successful" << std::endl;
        break;
    }

    std::cout << '\n';

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
        std::cout << "MidiAddBuffer: successful" << std::endl;
        break;
    }

    std::cout << '\n';

    return 0;
}

void MidiInput::start()
{
    midiCapabilities();

    openMidiDevice();

    midiBufferReady();

    // start
    midiInStart(hm);
}

void MidiInput::hold()
{
    Sleep(10000);
}