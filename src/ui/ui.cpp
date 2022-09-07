#include "ui.hpp"

Ui::Ui()
{
    piano = 
    {
        "
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|Q|11|2|W|3|E|4|55|R|6|T|7|Y|88|9|U|q|I|w|ee|O|r|P|t|A|yy|u|S|i|D|o|pp|F|a|G|s|H|dd|f|J|g|K|h|jj|L|k|Z|l|X|zz|x|C|c|V|v|bb|B|n|N|m|M|!!|?|$|+|^|-|@@|\"|#|{|%|}|&&|*|[|)|]|(|;;|,|:|`|<|~|>>|..|
        |00|_|11|2|_|3|_|4|55|_|6|_|7|_|88|9|_|q|_|w|ee|_|r|_|t|_|yy|u|_|i|_|o|pp|_|a|_|s|_|dd|f|_|g|_|h|jj|_|k|_|l|_|zz|x|_|c|_|v|bb|_|n|_|m|_|!!|?|_|+|_|-|@@|_|#|_|%|_|&&|*|_|)|_|(|;;|_|:|_|<|_|>>|..|
        |000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
        |000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
        |000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
        |000|111|22|333|44|555|666|777|888|99|qqq|ww|eee|rrr|ttt|yyy|uu|iii|oo|ppp|aaa|sss|ddd|ff|ggg|hh|jjj|kkk|lll|zzz|xx|ccc|vv|bbb|nnn|mmm|!!!|??|+++|--|@@@|###|%%%|&&&|**|)))|((|;;;|:::|<<<|>>>|..|
        |___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|___|__|___|___|___|___|__|
        "
    }
}

Ui::~Ui()
{

}

Ui::replace()
{

}

Ui::draw()
{

}