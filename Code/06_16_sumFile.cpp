//
// Created by Vojago on 2024/4/9.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

[[maybe_unused]] int code_16() {
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "输入数据文件的名字：";//scores.txt
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "无法访问文件：" << filename << endl;
        cout << "程序终止。\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    inFile >> value;
    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "结束文件访问。\n";
    else if (inFile.fail())
        cout << "数据不匹配导致输入终止。\n";
    else
        cout << "未知原因导致输入终止。\n";
    if (count == 0)
        cout << "无数据处理。\n";
    else {
        cout << "数据读取：" << count << endl;
        cout << "总和：" << sum << endl;
        cout << "平均：" << sum / count << endl;
    }
    inFile.close();
    return 0;
}
