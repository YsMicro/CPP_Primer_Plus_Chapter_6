//
// Created by Vojago on 2024/4/2.
//
//jump.cpp--使用 continue and break
#include <iostream>

const int ARSIZE = 80;

[[maybe_unused]] int code_12() {
    using namespace std;
    char line[ARSIZE];
    int spaces = 0;
    cout << "输入一行文本：\n";
    cin.get(line, ARSIZE);
    cout << "完整的文本：" << line << endl;
    cout << "第一个句号的文本：\n";
    for (int i = 0; line[i] != '\0'; ++i) {
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n" << spaces << " 个空格\n";
    cout << "完毕.\n";
    return 0;
}