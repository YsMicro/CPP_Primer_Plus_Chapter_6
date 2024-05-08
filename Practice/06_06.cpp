//
// Created by Vojago on 2024/5/6.
//
#include <iostream>

[[maybe_unused]] int practice_06() {
    using namespace std;

    struct MyStruct {
        string name;
        double donation = 0;
    };

    cout << "请输入捐献者数目：";
    int num;
    cin >> num;
    cin.get();
    auto *Patrons = new MyStruct[num];
    for (int i = 0; i < num; ++i) {
        cout << i + 1 << " 号捐献者的名字：" << endl;
        getline(cin, Patrons[i].name);
        cout << i + 1 << " 号捐献者的款项：" << endl;
        cin >> Patrons[i].donation;
        cin.get();
    }
    string common_patrons[num];
    bool grand_is_empty = true;
    bool common_is_empty = true;
    cout << "重要捐款人：" << endl;
    for (int i = 0; i < num; ++i) {
        if (Patrons[i].donation > 10000) {
            cout << Patrons[i].name << " "
                 << "$: " << Patrons[i].donation << endl;
            grand_is_empty = false;
        } else {
            common_patrons[i] = Patrons[i].name;
            common_is_empty = false;
        }
    }
    if (grand_is_empty)
        cout << "none" << endl;
    cout << "其他捐款人：" << endl;
    if (common_is_empty) {
        cout << "none";
    } else {
        for (int i = 0; i < num; ++i) {
            cout << common_patrons[i] << endl;
        }
    }
    delete[] Patrons;
//    return 0;
    if (grand_is_empty) {
        return 0;
    } else {
        return 1;
    }
}
