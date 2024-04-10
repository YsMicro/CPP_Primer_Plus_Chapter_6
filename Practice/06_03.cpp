//
// Created by Vojago on 2024/4/10.
//
#include <iostream>

[[maybe_unused]] int practice_03() {
    using namespace std;
    cout << "选择以下选项：" << endl
         << "c) 食肉动物    p) 钢琴家" << endl
         << "t) 树         g) 游戏" << endl
         << endl;
    char ch;
    bool exit = false;
    while (!exit && (cin >> ch)) {
        switch (ch) {
            case 'c':
                cout << "老虎是食肉动物。" << endl;
                exit = true;
                break;
            case 'p':
                cout << "莫扎特是一位伟大的钢琴家。" << endl;
                exit = true;
                break;
            case 't':
                cout << "枫树是一种树。" << endl;
                exit = true;
                break;
            case 'g':
                cout << "超级马力欧是一款伟大的游戏。" << endl;
                exit = true;
                break;
            default:
                cout << "请输入c、p、t或g：" << endl;
                break;
        }
    }
    return 0;
}