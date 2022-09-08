#include "../midi.hpp"

class Ui
{
private:
    std::string keyboard[13];

    void replace();
public:
    Ui();
    ~Ui() = default;

    void start(unsigned long data);

    void draw();
};