//
// Created by Vojago on 2024/4/9.
//
#include <iostream>
#include <array>

[[maybe_unused]] int practice_02() {
    using namespace std;
    const int SIZE = 10;
    array<double, SIZE> donation = {0};
    cout << "输入10个donation值：" << endl;
    double sum = 0;
    int a_count = 0;
    while (a_count < SIZE && cin >> donation[a_count]) {
        sum += donation[a_count];
        a_count++;
    }
    double avg = sum / a_count;
    int b_count=0;
    for (int i = 0; i <= a_count; ++i) {
        if (donation[i] > avg)
            b_count++;
    }
    cout << "平均值为：" << avg
         << "，数组中有 " << b_count
         << " 个数字大于平均值。" << endl;
    return 0;
}