#include "midi_out.hpp"

MidiOutput::MidiOutput()
{
    quantity_of_devices = midiOutGetNumDevs() - 1;

    hmo = nullptr;
}

MidiOutput::~MidiOutput()
{
    std::cout << "MidiOutput: Destructor" << std::endl;
}

void CALLBACK MidiOutput::MidiOutProc(HMIDIOUT hmo, UINT wMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
	switch (wMsg)
	{
	case MOM_OPEN:
		std::cout << "MOM_OPEN" << std::endl;
		break;
	case MOM_CLOSE:
		std::cout << "MOM_CLOSE" << std::endl;
		break;
	case MOM_POSITIONCB:
		std::cout << "MOM_POSITIONCB" << std::endl;
		break;
	case MOM_DONE:
		std::cout << "MOM_DONE" << std::endl;
		break;
	default:
		std::cout << "unknown" << std::endl;
		break;
	}
}

void MidiOutput::start()
{
    openMidiDevice();
}

void MidiOutput::openMidiDevice()
{
    result = midiOutOpen(&hmo, quantity_of_devices, (DWORD_PTR)MidiOutput::MidiOutProc, 0, CALLBACK_FUNCTION);
    switch (result)
    {
    case MMSYSERR_ALLOCATED:
        std::cerr << "MidiOutOpen: The specified resource is already allocated" << std::endl;
        assert(false);
    case MMSYSERR_BADDEVICEID:
        std::cerr << "MidiOutOpen: The specified device identifier is out of range" << std::endl;
        assert(false);
    case MIDIERR_NODEVICE:
        std::cerr << "MidiOutOpen: No MIDI port was found. This error occurs only when the mapper is opened" << std::endl;
        assert(false);
    case MMSYSERR_INVALPARAM:
        std::cerr << "MidiOutOpen: The specified pointer or structure is invalid" << std::endl;
        assert(false);
    case MMSYSERR_NOMEM:
        std::cerr << "MidiOutOpen: The system is unable to allocate or lock memory" << std::endl;
        assert(false);
    default:
        std::cout << "MidiOutOpen: successful" << std::endl;
        break;
    }

    std::cout << '\n';
}

void MidiOutput::play_a_note(DWORD note)
{
    result = midiOutShortMsg(hmo, note);
    switch (result)
    {
    case MIDIERR_BADOPENMODE:
        std::cerr << "midiOutShortMsg: The application sent a message without a status byte to a stream handle" << std::endl;
        break;
    case MIDIERR_NOTREADY:
        std::cerr << "midiOutShortMsg: The hardware is busy with other data" << std::endl;
        break;
    case MMSYSERR_INVALHANDLE:
        std::cerr << "midiOutShortMsg: The specified device handle is invalid" << std::endl;
        break;
    default:
        break;
    }
}