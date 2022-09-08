#ifndef _MIDI_OUT_HPP_
#define _MIDI_OUT_HPP_

#include "../midi.hpp"

class MidiOutput
{
private:
    MMRESULT result;

    UINT quantity_of_devices; // should be zero

    HMIDIOUT hmo;

    // std::vector<DWORD_PTR> midiMessages;
private:
    void openMidiDevice();

    // Callback
    static void CALLBACK MidiOutProc(HMIDIOUT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);
public:
    MidiOutput();
    ~MidiOutput();

    void play_a_note(DWORD note);
};

#endif /* MIDI_OUT_HPP */