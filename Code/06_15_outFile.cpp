//
// Created by Vojago on 2024/4/9.
//
#include <iostream>
#include <fstream>


[[maybe_unused]] int code_15() {
    using namespace std;
    char autoMobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("..\\Practice\\carInfo.txt");
    cout << "输入汽车的制造商和型号：";
    cin.getline(autoMobile, 50);
    cout << "输入车型年份：";
    cin >> year;
    cout << "输入原始要价：";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "制造商和型号：" << autoMobile << endl;
    cout << "年份：" << year << endl;
    cout << "曾经要价 $ " << a_price << endl;
    cout << "现在要价 $ " << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "制造商和型号：" << autoMobile << endl;
    outFile << "年份：" << year << endl;
    outFile << "曾经要价 $ " << a_price << endl;
    outFile << "现在要价 $ " << d_price << endl;

    outFile.close();
    return 0;
}
