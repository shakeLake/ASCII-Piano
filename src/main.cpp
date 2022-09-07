#include "midi_in.hpp"

int main()
{
    MidiOutput pno_out;

    MidiInput pno_in(&pno_out);

    pno_in.record();

    return 0;
}