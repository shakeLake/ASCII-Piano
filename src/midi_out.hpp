#ifndef _MIDI_OUT_HPP_
#define _MIDI_OUT_HPP_

#include <iostream>

#include <Windows.h>

#include <cassert>

class MidiOutput
{
private:
    MMRESULT result;
    UINT quantity_of_devices;
    HMIDIOUT hmo;
private:
    void openMidiDevice();

    // Callback
    static void CALLBACK MidiOutProc(HMIDIOUT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);
public:
    MidiOutput();
    ~MidiOutput();

    void start();

    void play_a_note(DWORD note);
    // void play_the_song();
};

#endif /* MIDI_OUT_HPP */