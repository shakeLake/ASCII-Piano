#include "ui.hpp"

Ui::Ui()
{
    /*
    // 10
    char_key['0'] = 1;
    char_key['Q'] = 2;
    char_key['1'] = 3;
    char_key['2'] = 4;
    char_key['W'] = 5;
    char_key['3'] = 6;
    char_key['E'] = 7;
    char_key['4'] = 8;
    char_key['5'] = 9;
    char_key['R'] = 10;

    // 20
    char_key['6'] = 11;
    char_key['T'] = 12;
    char_key['7'] = 13;
    char_key['Y'] = 14;
    char_key['8'] = 15;
    char_key['9'] = 16;
    char_key['U'] = 17;
    char_key['q'] = 18;
    char_key['I'] = 19;
    char_key['w'] = 20;

    // 30
    char_key['e'] = 21;
    char_key['O'] = 22;
    char_key['r'] = 23;
    char_key['P'] = 24;
    char_key['T'] = 25;
    char_key['A'] = 26;
    char_key['y'] = 27;
    char_key['u'] = 28;
    char_key['S'] = 29;
    char_key['i'] = 30;

    // 40
    char_key['D'] = 31;
    char_key['o'] = 32;
    char_key['p'] = 33;
    char_key['F'] = 34;
    char_key['a'] = 35;
    char_key['G'] = 36;
    char_key['s'] = 37;
    char_key['H'] = 38;
    char_key['d'] = 39;
    char_key['f'] = 40;

    //50
    char_key['J'] = 41;
    char_key['g'] = 42;
    char_key['K'] = 43;
    char_key['h'] = 44;
    char_key['j'] = 45;
    char_key['L'] = 46;
    char_key['k'] = 47;
    char_key['Z'] = 48;
    char_key['l'] = 49;
    char_key['X'] = 50;

    //60
    char_key['z'] = 52;
    char_key['x'] = 52;
    char_key['C'] = 53;
    char_key['c'] = 54;
    char_key['V'] = 55;
    char_key['v'] = 56;
    char_key['b'] = 57;
    char_key['B'] = 58;
    char_key['n'] = 59;
    char_key['N'] = 60;

    //70
    char_key['m'] = 61;
    char_key['M'] = 62;
    char_key['!'] = 63;
    char_key['?'] = 64;
    char_key['$'] = 65;
    char_key['+'] = 66;
    char_key['^'] = 67;
    char_key['-'] = 68;
    char_key['@'] = 69;
    char_key['/'] = 70;
    
    // 80
    char_key['#'] = 71;
    char_key['{'] = 72;
    char_key['%'] = 73;
    char_key['}'] = 74;
    char_key['&'] = 75;
    char_key['*'] = 76;
    char_key['['] = 77;
    char_key[')'] = 78;
    char_key[']'] = 79;
    char_key['('] = 80;

    // 88
    char_key[';'] = 81;
    char_key[','] = 82;
    char_key[':'] = 83;
    char_key['`'] = 84;
    char_key['<'] = 85;
    char_key['~'] = 86;
    char_key['>'] = 87;
    char_key['.'] = 88;
    */

    keyboard[0] = R"(|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|)";
    keyboard[1] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[2] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[3] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[4] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[5] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[6] = "|00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|/|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|";
    keyboard[7] = "|00|_|11|2|_|3|_|4|55|_|6|_|7|_|88|9|_|q|_|w|ee|_|r|_|t|_|yy|u|_|i|_|o|pp|_|a|_|s|_|dd|f|_|g|_|h|jj|_|k|_|l|_|zz|x|_|c|_|v|bb|_|n|_|m|_|!!|?|_|+|_|-|@@|_|#|_|%|_|&&|*|_|)|_|(|;;|_|:|_|<|_|>>|..|";
    keyboard[8] = "|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|";
    keyboard[9] = "|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|";
    keyboard[10] = "|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|";
    keyboard[11] = "|000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|";
    keyboard[12] = "|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|";
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
    std::cout << std::endl;

    // body
    for (unsigned int height = 0; height != 13; height++)
    {
        std::cout << keyboard[height];
        std::cout << std::endl;
    }
}