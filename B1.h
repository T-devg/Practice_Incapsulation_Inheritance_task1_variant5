//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B1_H
#define PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B1_H
#include <iostream>
using namespace std;
class B1 {
    int b1;
public:
    B1(int b1) {
        this->b1 = b1;
    }
    void show_B1() {
        cout << "B1 = " << b1 << endl;
    }
};


#endif //PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_B1_H
