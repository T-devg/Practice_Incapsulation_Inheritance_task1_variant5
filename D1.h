//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D1_H
#define PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D1_H
#include "B1.h"
#include "B2.h"


class D1
    :public B1, public B2
{
    int d1;
public:
    D1(int d1, int b1, int b2):B1(b1), B2(b2) {
        this->d1 = d1;
    }
    void show_D1() {
        cout << "D1 = " << d1 << endl;
        B1::show_B1();
        B2::show_B2();
    }
    int getD1() {
        return d1;
    }
};


#endif //PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D1_H
