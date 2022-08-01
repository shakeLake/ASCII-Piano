#include "midi_in.hpp"
#include "midi_out.hpp"

int main()
{
    MidiInput pno_in;

    pno_in.record();

    return 0;
}