//
// Created by Vojago on 2024/4/8.
//
#include <iostream>

const int MAX = 5;

[[maybe_unused]] int code_14() {
    using namespace std;
    int golf[MAX];
    cout << "请输入你的高尔夫得分。\n";
    cout << "你需要输入 " << MAX << " 回合得分。\n";
    int i;
    for (i = 0; i < MAX; ++i) {
        cout << "回合 #" << i + 1 << "：";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "请输入数字：";
        }
    }
    double total = 0.0;
    for (i = 0; i < MAX; ++i)
        total += golf[i];
    cout << MAX << "回合 " << "平均得分 = " << total / MAX;
    return 0;
}