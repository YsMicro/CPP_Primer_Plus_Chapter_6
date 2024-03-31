//
// Created by Vojago on 2024/3/31.
//
#include <iostream>

[[maybe_unused]] int code_02()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.') {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
//            std::cout << ch + 1;
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}