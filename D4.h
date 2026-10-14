//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D4_H
#define PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D4_H

#include "D3.h"
class D4:
public D3
{
    int d4;
public:
    D4(int d4, int d3, int d2, int d1, int b1, int b2)
     : D3(d3, d2, d1, b1, b2){
        this->d4 = d4;
    }
    void show_D4() {
        cout << "D4 = " << d4 << endl;
        D3::show_D3();
    }
    int getD4() {
        return d4;
    }
};

#endif //PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D4_H
