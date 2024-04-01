//
// Created by Vojago on 2024/4/1.
//
#include <iostream>
#include <climits>

bool is_int(double);

[[maybe_unused]] int code_07() {
    using namespace std;
    double num;
    cout << "Yo, dude! 输入一个整数值：";
    cin >> num;
    while (!is_int(num)) {
        cout << "超出范围--请重试：";
        cin >> num;
    }
    int val = int(num);
    cout << "你输入了整数 " << val << "\nBye\n";
    return 0;
}

bool is_int(double x) {
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}