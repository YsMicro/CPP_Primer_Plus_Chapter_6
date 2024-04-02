//
// Created by Vojago on 2024/4/2.
//
#include <iostream>
const int MAX = 5;

[[maybe_unused]] int code_13()
{
    using namespace std;
    double fish[MAX];
    cout << "请输入你的鱼的重量。\n";
    cout << "你可能输入超过 " << MAX
    << " 条鱼 <q to terminate>。\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < MAX && cin >> fish[i])
    {
        if (++i < MAX)
            cout << "fish #" << i + 1 << ": ";
    }
    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }
    if (i == 0)
        cout << "空军了\n";
    else
        cout << total / i << " = 平均重量对于 " << i << " 条鱼\n";
    cout << "Done.\n";
    return 0;
}