//
// Created by Vojago on 2024/5/8.
//
#include <iostream>

[[maybe_unused]] int practice_07() {
    using namespace std;
    int vowels = 0;
    int consonants = 0;
    int others = 0;
    string input;
    cout << "请输入语句(输入q退出)：" << endl;
    while (cin >> input) {
        if (input == "q") {
            break;
        }
        if (isalpha(input[0])) {
            switch (toupper(input[0])) {
                case 'A':
                    vowels++;
                    break;
                case 'E':
                    vowels++;
                    break;
                case 'I':
                    vowels++;
                    break;
                case 'O':
                    vowels++;
                    break;
                case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        } else {
            others++;
        }
    }
    cout << vowels << " 个词以元音开头" << endl
         << consonants << " 个词以辅音开头\n"
         << others << " 个词以其他字符开头" << endl;
    return 0;
}
