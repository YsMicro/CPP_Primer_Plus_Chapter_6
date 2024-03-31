//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
const int FAVE = 36;

[[maybe_unused]] int code_03()
{
    using namespace std;
    int n;
    cout << "在 1 - 100 范围内输入一个数字来寻找";
    cout << "我最喜欢的数字: ";
    do {
        cin >> n;
        if (n < FAVE)
            cout << "太小--再猜一遍: ";
        else if (n > FAVE)
            cout << "太大--再猜一遍: ";
        else
            cout << FAVE << "！ 猜对了！\n";
    } while (n != FAVE);
    return 0;
}