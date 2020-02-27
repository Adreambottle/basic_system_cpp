//
//  main.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "Cl_RAM.cpp"
//#include "BIOS.cpp"




void input_1(Byte &bt){
    bt.change_contents(7, 1);
    bt.used = 1;
};


int main() {
//    Byte test1;
//    vector<Byte> test_vec;
//    for(int i = 0; i != 10; ++i){
//        Byte bt;
//        bt.show_contents(cout);
//        test_vec.push_back(bt);
//
//    }

    RAM test_RAM;
    test_RAM.start();
    input_1(test_RAM.contents[0]);
    
//    Test_orders test_order;
//    test_RAM = test_order.input_1(test_RAM);
    
    
    int count = 0;
    for(auto item : test_RAM.contents){
        item.show_contents(cout);
//        cout << item.used << endl;
        if (count > 10)
            break;
        ++count;
    }
        

    return 0;
}



