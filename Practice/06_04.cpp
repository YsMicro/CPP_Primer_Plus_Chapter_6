// Create by Shujia Huang on 2021-08-03
#include <iostream>


[[maybe_unused]] int practice_04() {

    using namespace std;

    const int STR_SIZE = 80;
    struct Bop {
        char fullname[STR_SIZE]; // real name
        char title[STR_SIZE];    // job title
        char bopname[STR_SIZE];  // secret BOP name
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };

    const int size = 5;
    const Bop bops[size] = {
            {"Wimp Macho", "bbb", "c", 0},
            {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
            {"Celia Laiter", "2AAAA", "3AAAAA", 2},
            {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
            {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    cout << "Benevolent order of Programmers report.\n";
    cout << "a. display by name     b. display by title\n"
         << "c. display by bopname  d. display by preference\n"
         << "q. quit" << endl;

    char ch;
    while (cin >> ch) {

        if (ch == 'q') {
            break;
        }

        for (const auto & bop : bops) {

            switch (ch) {
                case 'a':
                    cout << bop.fullname << "\n";
                    break;
                case 'b':
                    cout << bop.title << "\n";
                    break;
                case 'c':
                    cout << bop.bopname << "\n";
                    break;
                case 'd':
                    cout << bop.preference << "\n";
                    break;

                default:
                    break;
            }
        }

        cout << "Next choice: ";
    }
    cout << "** Done **" << endl;
    return 0;
}

