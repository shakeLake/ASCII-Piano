#include <iostream>
#include <thread>

class Ui
{
private:
    const std::map<unsigned short, char> note_char;

    char piano[];

    void replace();
public:
    Ui();
    ~Ui();

    void draw();
};