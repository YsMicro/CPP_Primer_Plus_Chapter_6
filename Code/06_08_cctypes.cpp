//
// Created by Vojago on 2024/4/1.
//
//cctypes.cpp--使用 cType.h 库
#include <iostream>
#include <cctype>

[[maybe_unused]] int code_08() {
    using namespace std;
    cout << "输入用于分析的文本，并键入 @ "
            "以终止输入。\n";
    char ch;
    int whiteSpace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whiteSpace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whiteSpace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}