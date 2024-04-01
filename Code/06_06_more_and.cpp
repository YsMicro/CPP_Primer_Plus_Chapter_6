//
// Created by Vojago on 2024/4/1.
//
//more_and.cpp--使用逻辑与运算符
#include <iostream>

const char *qualify[4] = {
        "10,000 米赛跑。\n",
        "泥泞拔河。\n",
        "大师独木舟比武。\n",
        "扔馅饼节。\n"
};

[[maybe_unused]] int code_06() {
    using namespace std;
    int age;
    cout << "输入你的年龄：";
    cin >> age;
    int index;
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "你有资格参加：" << qualify[index];
    return 0;
}