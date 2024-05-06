//
// Created by Vojago on 2024/4/12.
//
#include <iostream>

[[maybe_unused]] int practice_05() {
    using namespace std;
    const double TAX_RATE1 = 0.1;
    const double TAX_RATE2 = 0.15;
    const double TAX_RATE3 = 0.20;
    double income = 0.0, tax;
    cout << "请输入您的收入：";
    while (cin >> income) {
        if (income < 0) {
            break;
        } else if (income <= 5000) {
            tax = 0;
            cout << "收入所得税：" << tax << endl;
            cout << "请输入您的收入：";
        } else if (income <= 15000) {
            tax = (income - 5000) * TAX_RATE1;
            cout << "收入所得税：" << tax << endl;
            cout << "请输入您的收入：";
        } else if (income <= 35000) {
            tax = 10000 * TAX_RATE1 + (income - 15000) * TAX_RATE2;
            cout << "收入所得税：" << tax << endl;
            cout << "请输入您的收入：";
        } else if (income > 35000) {
            tax = 10000 * TAX_RATE1 + 20000 * TAX_RATE2 + (income - 35000) * TAX_RATE3;
            cout << "收入所得税：" << tax << endl;
            cout << "请输入您的收入：";
        }
    }
    return 0;
}
