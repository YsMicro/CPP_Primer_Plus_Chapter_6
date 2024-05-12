//
// Created by Vojago on 2024/5/9.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

[[maybe_unused]] int practice_08() {
    using namespace std;
    ifstream inFile;
    string filename;

    cout << "请输入文件名：";
    getline(cin, filename);
    filename = "..\\Practice\\" + filename;
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "无法访问文件：" << filename << endl;
        exit(EXIT_FAILURE);
    }
    int char_num = 0;
    char ch = '0';
    while (!inFile.eof()) {
        inFile.get(ch);
        char_num++;
    }
    cout << "文件：" << filename << " 包含 "
         << char_num << " 个字符";
    inFile.close();
    return 0;
}
