//
// Created by Vojago on 2024/4/1.
//
#include <iostream>

[[maybe_unused]] int code_09() {
    using namespace std;
    int a,b;

    cout << "输入两个整数：" << endl;
    cin >> a >> b;
    cout << a << " 和 " << b << " 中的较大者";
    int c = a > b ? a : b;
    cout << "为 " << c <<endl;
    return 0;
}