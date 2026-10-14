//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D3_H
#define PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D3_H
#include "D1.h"
#include "D2.h"

class D3
    :public D1, public D2
{
    int d3;
public:
    D3(int d3, int d2, int d1, int b1, int b2):D1(d1,b1,b2),D2(d2){
        this->d3 = d3;
    }
    void show_D3() {
        cout << "D3 = " << d3 << endl;
        D2::show_D2();
        D1::show_D1();
    }
};


#endif //PRACTICE_INCAPSULATION_INHERITANCE_TASK1_VARIANT5_D3_H
