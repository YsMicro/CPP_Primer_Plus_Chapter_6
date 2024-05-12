//
// Created by Vojago on 2024/5/12.
//
#include <iostream>
#include <fstream>

int practice_09() {
    using namespace std;
    struct Patron {
        string name;
        double donation = 0;
    };
    cout << "请输入要读取的文件名：";
    string filename;
    getline(cin, filename);

    filename = "..\\Practice\\" + filename;
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "\n文件读取失败";
        exit(EXIT_FAILURE);
    }
    //统计文件行数
    int line = 0;
    inFile >> line;
    inFile.get();
    //写入内容
    auto *patrons = new Patron[line];
    for (int i = 0; i < line; ++i) {
        getline(inFile, patrons[i].name);
        inFile >> patrons[i].donation;
        inFile.get();
    }
    string common_patrons[line];
    bool grand_is_empty = true;
    bool common_is_empty = true;
    cout << "重要捐款人：" << endl;
    for (int i = 0; i < line; ++i) {
        if (patrons[i].donation > 10000) {
            cout << patrons[i].name << " "
                 << "$: " << patrons[i].donation << endl;
            grand_is_empty = false;
        } else {
            common_patrons[i] = patrons[i].name;
            common_is_empty = false;
        }
    }
    if (grand_is_empty)
        cout << "none" << endl;
    cout << "其他捐款人：" << endl;
    if (common_is_empty) {
        cout << "none";
    } else {
        for (int i = 0; i < line; ++i) {
            cout << common_patrons[i] << endl;
        }
    }
    inFile.close();
    delete[] patrons;
//    return 0;
    if (grand_is_empty) {
        return 0;
    } else {
        return 1;
    }
}
