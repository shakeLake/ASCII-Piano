#include <iostream>

#include <map>

//#include <thread>

class Ui
{
private:
    std::map<char, unsigned short> note_char;

    std::string keyboard;

    void replace();
public:
    Ui();
    ~Ui();

    void start(unsigned long data);

    void draw();
};