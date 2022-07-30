#ifndef _MIDI_IN_HPP_
#define _MIDI_IN_HPP_

#include <iostream>

#include <Windows.h>

class MidiInput
{
private:

    MMRESULT result;

    MIDIINCAPS data;

    UINT quantity_of_devices;

    char lpData[256];
    MIDIHDR phm;

    HMIDIIN hm;
private:
    // Callback function
    void CALLBACK midiCallBack(HMIDIIN, UINT, DWORD, DWORD, DWORD);

    int midiCapabilities();

    int openMidiDevice();

    int midiBufferReady();
public:
    // Constructor
    MidiInput();
    // Desturctor
    ~MidiInput();

    void start();

    void hold();
};

#endif /* _MIDI_IN_HPP_ */