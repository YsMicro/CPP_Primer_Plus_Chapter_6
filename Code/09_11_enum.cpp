//
// Created by Vojago on 2024/4/2.
//
//enum.cpp--使用枚举
#include <iostream>

enum {
    red, orange, yellow, green, blue, violet, indigo
};

[[maybe_unused]] int code_11() {
    using namespace std;
    cout << "输入颜色的代码(0 - 6):";
    int code = 0;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
            case red:
                cout << "她的嘴唇是红色的。\n";
                break;
            case orange:
                cout << "她的头发是橘色的。\n";
                break;
            case yellow:
                cout << "她的鞋子是黄色的。\n";
                break;
            case green:
                cout << "她的指甲是绿色的。\n";
                break;
            case blue:
                cout << "她的毛衣是蓝色的。\n";
                break;
            case violet:
                cout << "她的眼睛是堇紫的。\n";
                break;
            case indigo:
                cout << "她的感情是靛蓝的。\n";
                break;
        }
        cout << "输入颜色的代码(0 - 6):";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}
