#include "ui.hpp"

Ui::Ui()
{
    keyboard[0] = R"(|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|)";
    keyboard[1] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[2] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[3] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[4] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[5] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[6] = "|00|Q|11|22|W|3|E|44|55|R|6|T|7|Y|88|99|U|q|I|ww|ee|O|r|P|t|A|yy|uu|S|i|D|oo|pp|F|a|G|s|H|dd|ff|J|g|K|hh|jj|L|k|Z|l|X|zz|xx|C|c|V|vv|bb|B|n|N|m|M|!!|??|$|+|^|--|@@|/|#|{|%|}|&&|**|[|)|]|((|;;|,|:|`|<|~|>>|..|";
    keyboard[7] = "|00|_|11|22|_|3|_|44|55|_|6|_|7|_|88|99|_|q|_|ww|ee|_|r|_|t|_|yy|uu|_|i|_|oo|pp|_|a|_|s|_|dd|ff|_|g|_|hh|jj|_|k|_|l|_|zz|xx|_|c|_|vv|bb|_|n|_|m|_|!!|??|_|+|_|--|@@|_|#|_|%|_|&&|**|_|)|_|((|;;|_|:|_|<|_|>>|..|";
    keyboard[8] = "|000|111|222|333|444|555|666|777|888|999|qqq|www|eee|rrr|ttt|yyy|uuu|iii|ooo|ppp|aaa|sss|ddd|fff|ggg|hhh|jjj|kkk|lll|zzz|xxx|ccc|vvv|bbb|nnn|mmm|!!!|???|+++|---|@@@|###|%%%|&&&|***|)))|(((|;;;|:::|<<<|>>>|..|";
    keyboard[9] = "|000|111|222|333|444|555|666|777|888|999|qqq|www|eee|rrr|ttt|yyy|uuu|iii|ooo|ppp|aaa|sss|ddd|fff|ggg|hhh|jjj|kkk|lll|zzz|xxx|ccc|vvv|bbb|nnn|mmm|!!!|???|+++|---|@@@|###|%%%|&&&|***|)))|(((|;;;|:::|<<<|>>>|..|";
    keyboard[10] = "|000|111|222|333|444|555|666|777|888|999|qqq|www|eee|rrr|ttt|yyy|uuu|iii|ooo|ppp|aaa|sss|ddd|fff|ggg|hhh|jjj|kkk|lll|zzz|xxx|ccc|vvv|bbb|nnn|mmm|!!!|???|+++|---|@@@|###|%%%|&&&|***|)))|(((|;;;|:::|<<<|>>>|..|";
    keyboard[11] = "|000|111|222|333|444|555|666|777|888|999|qqq|www|eee|rrr|ttt|yyy|uuu|iii|ooo|ppp|aaa|sss|ddd|fff|ggg|hhh|jjj|kkk|lll|zzz|xxx|ccc|vvv|bbb|nnn|mmm|!!!|???|+++|---|@@@|###|%%%|&&&|***|)))|(((|;;;|:::|<<<|>>>|..|";
    keyboard[12] = "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__|";

    keyboard_zero[0] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[1] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[2] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[3] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[4] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[5] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[6] = "|  | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |  |";
    keyboard_zero[7] = "|  |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |  |_| |_| |_|  |  |";
    keyboard_zero[8] = "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |  |";
    keyboard_zero[9] = "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |  |";
    keyboard_zero[10] = "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |  |";
    keyboard_zero[11] = "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |  |";
    keyboard_zero[12] = "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__|";
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

            00 3c 00 is note (60) - middle C
            00 3c 00 (hex) = 15360 (dec) 
            15360 / 16 / 16 = 60 - middle C

            90 is pressed note or not

            00 00 90 (hex) = 144 (dec)
        */
        pressed = 1;

        note = ((data - 6553600 - 144) / 16) / 16;

        #ifdef DEBUG
            std::cout << note << " : " << pressed << std::endl;
        #endif
    }
    else
    {
        pressed = 0;

        note = ((data - 4194304 - 128) / 16) / 16;

        #ifdef DEBUG
            std::cout << note << " : " << pressed << std::endl;
        #endif
    }

    if (note < 1000)
        replace(note - 20, pressed);
}

void Ui::replace(unsigned long note, bool pressed)
{
    for (unsigned int i = 0; i != 12; i++)
    {
        for (unsigned int j = 0; j != keyboard[i].size(); j++)
        {
            if (keyboard[i][j] == '|' || keyboard[i][j] == '_')
                continue;
            
            if (keyboard[i][j] == key_char[note - 1] && pressed == 1)
            {
                keyboard_zero[i][j] = '#';
            }
            else if (keyboard[i][j] == key_char[note - 1] && pressed == 0)
            {
                keyboard_zero[i][j] = ' ';
            }
        }
    }

    draw();
}

void Ui::draw()
{
    for (int i = 0; i != 208; i++)
        std::cout << '_';
    std::cout << std::endl;

    // body
    for (unsigned int i = 0; i != 13; i++)
    {
        std::cout << keyboard_zero[i];
        std::cout << std::endl;
    }
}