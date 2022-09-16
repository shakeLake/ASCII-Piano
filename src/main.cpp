#include "default.hpp"
#include "midi_in_out/midi_in.hpp"

int main()
{
    MidiOutput pno_out;
    Ui draw;

    MidiInput pno_in(&pno_out, &draw);

    pno_in.record();

    return 0;
}