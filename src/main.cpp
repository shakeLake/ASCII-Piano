#include "midi_in.hpp"
//#include "midi_out.hpp"

int main()
{
    MidiOutput pno_out;
    pno_out.start();

    MidiInput pno_in(&pno_out);

    pno_in.record();

    return 0;
}