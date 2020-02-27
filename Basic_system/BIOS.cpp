//
//  BIOS.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "BIOS.hpp"
#include "Header.h"
#include "Cl_RAM.cpp"


class Basic_Orders{
    void load_RAM();
    void load_ROM();
};


//class Test_orders{
//public:
//    RAM & input_1(RAM ram){
//        Byte first_bt = ram.contents[0];
//        first_bt.change_contents(7, true);
//        first_bt.used = 1;
//        return ram;
//    }
//
//
//    void read_1();
//};
