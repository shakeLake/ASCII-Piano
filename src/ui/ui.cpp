#include "ui.hpp"

Ui::Ui()
{
    std::cout << "1" << std::endl;

    note_char =
    { 
        {'0', 1}, {'Q', 2}, {'1', 3}, {'2', 4}, {'W', 5}, {'3', 6}, {'E', 7}, {'4', 8}, {'5', 9}, 
        {'R', 10}, {'6', 11}, {'T', 12}, {'7', 13}, {'Y', 14}, {'8', 15}, {'9', 16}, {'U', 17}, 
        {'q', 18}, {'I', 19}, {'w', 20}, {'e', 21}, {'O', 22}, {'r', 23}, {'P', 24}, {'T', 25}, 
        {'A', 26}, {'y', 27}, {'u', 28}, {'S', 29}, {'i', 30}, {'D', 31}, {'o', 32}, {'p', 33}, 
        {'F', 34}, {'a', 35}, {'G', 36}, {'s', 37}, {'H', 38}, {'d', 39}, {'f', 40}, {'J', 41}, 
        {'g', 42}, {'K', 43}, {'h', 44}, {'j', 45}, {'L', 46}, {'k', 47}, {'Z', 48}, {'l', 49}, 
        {'X', 50}, {'z', 51}, {'x', 52}, {'C', 53}, {'c', 54}, {'V', 55}, {'v', 56}, {'b', 57}, 
        {'B', 58}, {'n', 59}, {'N', 60}, {'m', 61}, {'M', 62}, {'!', 63}, {'?', 64}, {'$', 65}, 
        {'+', 66}, {'^', 67}, {'-', 68},{'@', 69}, {'\"', 70}, {'#', 71}, {'{', 72}, {'%', 73},
        {'}', 74}, {'&', 75}, {'*', 76}, {'[', 77}, {')', 78}, {']', 79}, {'(', 80}, {';', 81}, 
        {',', 82}, {':', 83}, {'`', 84}, {'<', 85}, {'~', 86}, {'>', 87}, {'.', 88}
    };

    keyboard = 
        R"(|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
		|00|_|11|2|_|3|_|4|55|_|6|_|7|_|88|9|_|q|_|w|ee|_|r|_|t|_|yy|u|_|i|_|o|pp|_|a|_|s|_|dd|f|_|g|_|h|jj|_|k|_|l|_|zz|x|_|c|_|v|bb|_|n|_|m|_|!!|?|_|+|_|-|@@|_|#|_|%|_|&&|*|_|)|_|(|;;|_|:|_|<|_|>>|..|
		|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
		|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
		|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
		|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
		|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|)";

        std::cout << "2" << std::endl;
}

Ui::~Ui()
{
    std::cout << "Destructor" << std::endl;
}

void Ui::start(unsigned long data)
{
    unsigned long note;
    bool pressed;

    if (data > 6000000)
    {
        /*
            dwParam is 6569104 for instance 
            6569104 (decimal) to 64 3c 90 (hexdecimal)

            64 00 00 hex = 6553600 dec
            64 is 90 ;)

            00 3c 00 is note

            90 is pressed note or not

            00 00 90 (hex) = 144 (dec)

            15300 is ;)
        */
        pressed = 1;

        note = data - 6553600 - 144 - 15300;

        std::cout << note << " : " << pressed << std::endl;
    }
    else
    {
        pressed = 0;

        note = data - 4194304 - 128 - 15300;

        std::cout << note << " : " << pressed << std::endl;
    }
}

void Ui::replace()
{

}

void Ui::draw()
{
    for (int i = 0; i != 194; i++)
        std::cout << '_';

    // body

    std::cout << "1: " << keyboard;
    /*
    for (unsigned int height = 0; height != 13; height++)
    {
        for (unsigned int width = 0; width != 194; width++)
            std::cout << keyboard[width];

        std::cout << std::endl;
    }
    */

    for (int i = 0; i != 194; i++)
        std::cout << '_';
}