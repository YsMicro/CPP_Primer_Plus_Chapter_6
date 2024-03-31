//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
const int ARSIZE = 6;
[[maybe_unused]] int code_05()
{
    using namespace std;
    float naaq[ARSIZE];
    cout << "Enter the NAAQs (New Age Awareness Quotients)"
    << "of\nyour neighbors.Program terminates "
    << "when you make\n"<< ARSIZE << " entries "
    << "or enter a negative value.\n";

    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ARSIZE && temp >= 0) {
        naaq[i] = temp;
        ++i;
        if (i < ARSIZE) {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data--bye\n";
    else {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; ++j)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
        << "the New Age than you do.\n";
    }
    return 0;
}