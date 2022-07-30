#include "midi_in.hpp"
//#include "midi_out.hpp"

int main()
{
    MidiInput pno;

    pno.start();

    pno.hold();

    return 0;
}