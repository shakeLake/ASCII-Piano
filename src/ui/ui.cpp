#include "ui.hpp"

Ui::Ui()
{
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

            00 3c 00 is note

            90 is pressed note or not

            00 00 90 (hex) = 144 (dec)
        */
        pressed = 1;

        note = data - 6553600 - 144 - ;

        std::cout << note << " : " << pressed << std::endl;
    }
    else
    {
        pressed = 0;

        note = data - 4194304 - 128 - ;

        std::cout << note << " : " << pressed << std::endl;
    }

    std::cout << "replace" << std::endl;
    replace(note, pressed);
}

void Ui::replace(unsigned long note, bool pressed)
{
    /*
    for (unsigned int i = 0; i != 12; i++)
    {
        for (unsigned int j = 0; j != keyboard[i].size(); j++)
        {
            if (keyboard[i][j] == '|' || keyboard[i][j] == '_')
                continue;
            
            if (keyboard[i][j] != key_char[note - 1])
            {
                keyboard[i][j] = ' ';
            }
        }
    }
    */

    draw();
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