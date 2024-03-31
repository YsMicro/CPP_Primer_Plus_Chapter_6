//
// Created by Vojago on 2024/3/31.
//
//or.cpp--使用逻辑或运算符
#include <iostream>

[[maybe_unused]] int code_04()
{
    using namespace std;
    cout << "这个程序可能格式化你的硬盘\n"
            "并且摧毁你所有的数据。\n"
            "你要继续吗？<y/n>";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "你已经被警告过了！\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "明智之举……再见\n";
    else
        cout << "那不是y或n！显然你"
                "不能遵循\n指令，所以"
                "无论如何我都要把你的磁盘扔掉。\a\a\a\n";
    return 0;
}