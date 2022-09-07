#ifndef _MIDI_IN_HPP_
#define _MIDI_IN_HPP_

// set RELEASE to build without logs
#define DEBUG

// I / O
#include <iostream>

// midi
#include <Windows.h>

// assert
#include <cassert>

// play_a_note()
#include "midi_out.hpp"

class MidiInput
{
private:
    MidiOutput* out;

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
    MidiInput(MidiOutput*);
    // Desturctor
    ~MidiInput();

    void record();
};

#endif /* _MIDI_IN_HPP_ */