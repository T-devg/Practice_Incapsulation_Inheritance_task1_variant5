#include <iostream>
#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"
int main() {
    cout << "=================B1======================" << endl;
    B1 obj_b1(5);
    obj_b1.show_B1();

    cout << "=================B2======================" << endl;
    B2 obj_b2(10);
    obj_b2.show_B2();

    cout << "=================D1======================" << endl;
    D1 obj_d1(15,obj_b1.getB1(),obj_b2.getB2());
    obj_d1.show_D1();

    cout << "=================D2======================" << endl;
    D2 obj_d2(50);
    obj_d2.show_D2();

    cout << "=================D3======================" << endl;
    D3 obj_d3(100,obj_d2.getD2(),obj_d1.getD1(),
        obj_b1.getB1(),obj_b2.getB2());
    obj_d3.show_D3();

    cout << "=================D4======================" << endl;
    D4 obj_d4(
    200,
obj_d3.getD3(),
obj_d2.getD2(),
   obj_d1.getD1(),  //башня )
obj_b1.getB1(),
obj_b2.getB2());
    obj_d4.show_D4();

    return 0;
}