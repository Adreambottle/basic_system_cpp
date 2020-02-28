//
//  Cl_RAM.hpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#ifndef CL_RAM_h
#define CL_RAM_h

#include <stdio.h>
#include "Header.h"
#include "Cl_Byte.hpp"


class RAM{

public:
    RAM & start();     // Start the RAM
    RAM & restart();   // resart the RAM
    RAM & change_length(int new_length_num);
    RAM & change_layer(int new_layer_num);
    
    

public:

//    const short unit_num = 8;
    int length_num = 1024;
    int layer_num = 3;
    vector<Byte> contents;
    
//    for(int i = 0; i != 10; ++i){
//        Byte bt;
//        contents.push_back(bt);
//    }

};


#endif
