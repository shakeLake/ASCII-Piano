#include "midi_in.hpp"

MidiInput::MidiInput()
{
    quantity_of_devices = midiInGetNumDevs() - 1;

    // MIDIHDR initialization 
    phm.lpData = lpData;
    phm.dwBufferLength = sizeof(lpData);
    phm.dwFlags = 0;

    hm = nullptr;
}

MidiInput::~MidiInput()
{
    midiInUnprepareHeader(hm, &phm, sizeof(phm));
    midiInStop(hm);

    std::cout << "stop it already" << std::endl;
}

int MidiInput::midiCapabilities()
{
    result = midiInGetDevCaps(quantity_of_devices, &data, sizeof(data));
    switch (result)
    {
    case MMSYSERR_BADDEVICEID:
        std::cerr << "MidiInGetDevCaps: The specified device identifier is out of range" << std::endl;
        return 1;
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInGetDevCaps: The specified pointer or structure is invalid" << std::endl;
        return 1;
    case MMSYSERR_NODRIVER:
        std::cerr << "MidiInGetDevCaps: The driver is not installed" << std::endl;
        return 1;
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInGetDevCaps: The system is unable to allocate or lock memory" << std::endl;
        return 1;
    default:
        std::cout << "MidiInGetDevCaps: successful" << std::endl;
        break;
    }
    return 0;
}

int MidiInput::openMidiDevice()
{
    result = midiInOpen(&hm, quantity_of_devices, (DWORD)(void*)midiCallBack, 0, CALLBACK_FUNCTION);
    switch (result)
    {
    case MMSYSERR_ALLOCATED:
        std::cerr << "MidiInOpen: The specified resource is already allocated" << std::endl;
        return 1;
    case MMSYSERR_BADDEVICEID:
        std::cerr << "MidiInOpen: The specified device identifier is out of range" << std::endl;
        return 1;
    case MMSYSERR_INVALFLAG:
        std::cerr << "MidiInOpen: The flags specified by dwFlags are invalid" << std::endl;
        return 1;
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInOpen: The specified pointer or structure is invalid" << std::endl;
        return 1;
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInOpen: The system is unable to allocate or lock memory" << std::endl;
        return 1;
    default:
        std::cout << "MidiInOpen: successful" << std::endl;
        break;
    }
    return 0;
}

int MidiInput::midiBufferReady()
{
    result  = midiInPrepareHeader(hm, &phm, sizeof(phm));
    switch (result)
    {
    case MMSYSERR_INVALHANDLE:
        std::cerr << "MidiInPrepareHeader: The specified device handle is invalid" << std::endl;
        return 1;
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiInPrepareHeader: The specified address is invalid" << std::endl;
        return 1;
    case MMSYSERR_NOMEM:
        std::cerr << "MidiInPrepareHeader: The system is unable to allocate or lock memory" << std::endl;
        return 1;
    default:
        std::cout << "MidiInPrepareHeader: successful" << std::endl;
        break;
    }

    result = midiInAddBuffer(hm, &phm, sizeof(phm));
    switch (result)
    {
    case MIDIERR_STILLPLAYING:
        std::cerr << "MidiAddBuffer: The buffer pointed to by lpMidiInHdr is still in the queue" << std::endl;
        return 1;
    case MIDIERR_UNPREPARED:
        std::cerr << "MidiAddBuffer: The buffer pointed to by lpMidiInHdr has not been prepared" << std::endl;
        return 1;
    case MMSYSERR_INVALHANDLE:
        std::cerr << "MidiAddBuffer: The specified device handle is invalid" << std::endl;
        return 1;
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiAddBuffer: The specified pointer or structure is invalid" << std::endl;
        return 1;
    case MMSYSERR_NOMEM:
        std::cerr << "MidiAddBuffer: The system is unable to allocate or lock memory" << std::endl;
        return 1;
    default:
        std::cout << "MidiAddBuffer: successful" << std::endl;
        break;
    }

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