//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B2_H
#define PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B2_H
#include <iostream>
using namespace std;
class B2 {
    int b2;
public:
    B2(int b2) {
        this->b2 = b2;
    }
    void show_B2() {
        cout << "B1 = " << b2 << endl;
    }
    int getB2() {
        return b2;
    }
};

#endif //PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B2_H
