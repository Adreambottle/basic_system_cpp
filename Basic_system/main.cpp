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
#include "Cl_RAM.hpp"




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
    
    for(auto item : test_RAM.contents){
        item.show_contents(cout);
    }
        

    return 0;
}



