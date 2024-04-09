//
// Created by Vojago on 2024/4/9.
//
#include <iostream>
#include <cctype>

[[maybe_unused]] int practice_01() {
    using namespace std;
    char ch;
    cout << "输入字符：" << endl;
    while (cin.get(ch)) {
        if (ch == '@')
            break;
        else if (isdigit(ch))
            continue;
        else if (!(ch >= '0' && ch <= '9')) {
            if (islower(ch))
                ch = char(toupper(ch));
            else if (isupper(ch))
                ch = char(tolower(ch));
            cout << ch;
        }
    }
    cout << "\n结束。\n";
    return 0;
}