#include "../default.hpp"

class Ui
{
private:
    const std::array<char, 88> key_char = 
    {
        '0', 'Q', '1', '2', 'W', '3', 'E', '4', '5', 'R',
        '6', 'T', '7', 'Y', '8', '9', 'U', 'q', 'I', 'w',
        'e', 'O', 'r', 'P', 'T', 'A', 'y', 'u', 'S', 'i',
        'D', 'o', 'p', 'F', 'a', 'G', 's', 'H', 'd', 'f',
        'J', 'g', 'K', 'h', 'j', 'L', 'k', 'Z', 'l', 'X',
        'z', 'x', 'C', 'c', 'V', 'v', 'b', 'B', 'n', 'N',
        'm', 'M', '!', '?', '$', '+', '^', '-', '@', '/',
        '#', '{', '%', '}', '&', '*', '[', ')', ']', '(',
        ';', ',', ':', '`', '<', '~', '>', '.'
    };

    std::string keyboard[13];
    std::string keyboard_zero[13];

    void replace(unsigned long, bool);
public:
    Ui();
    ~Ui() = default;

    void start(unsigned long data);

    void draw();
};