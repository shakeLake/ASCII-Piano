#ifndef _MIDI_IN_HPP_
#define _MIDI_IN_HPP_

#include <iostream>

#include <Windows.h>

#include <cassert>

#include "midi_out.hpp"

class MidiInput
{
private:
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

    void openMidiDevice();

    void midiBufferReady();
    
    void hold();
public:
    // Constructor
    MidiInput();
    // Desturctor
    ~MidiInput();

    void record();
};

#endif /* _MIDI_IN_HPP_ */