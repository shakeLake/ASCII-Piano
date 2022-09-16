#ifndef _MIDI_IN_HPP_
#define _MIDI_IN_HPP_

#include "../default.hpp"

#include "../ui/ui.hpp"

#include "midi_out.hpp"

typedef std::pair<MidiOutput*, Ui*> MidiOut_UI;

class MidiInput
{
private:
    MidiOutput* out;
    Ui* inter;

    MidiOut_UI objectcs_ptr;

    MMRESULT result;

    MIDIINCAPS data;

    UINT quantity_of_devices;

    char lpDataArr[256];
    MIDIHDR phm;

    HMIDIIN hm;
private:
    // Callback function
    static void CALLBACK MidiInProc(HMIDIIN, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

    void midiCapabilities();

    void take_and_play(DWORD_PTR);

    void openMidiDevice();

    void midiBufferReady();
    
    void hold();
public:
    // Constructor
    MidiInput(MidiOutput*, Ui*);

    // Desturctor
    ~MidiInput();

    void record();
};

#endif /* _MIDI_IN_HPP_ */