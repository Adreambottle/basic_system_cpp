//
//  Cl_ROM.hpp
//  Basic_system
//
//  Created by Daniel on 2020/3/1.
//  Copyright © 2020 Daniel. All rights reserved.
//

#ifndef Cl_ROM_hpp
#define Cl_ROM_hpp

#include <stdio.h>
#include "Cl_Byte.h"



class ROM{
public:
    ROM & start_1(const int &rom_index);     // Start the RAM
    ROM & restart();   // resart the RAM
    ROM & change_length(int new_length_num);
    ROM & change_layer(int new_layer_num);

    
    

public:

//    const short unit_num = 8;
    int length_num = 1024;   // 1K
    int layer_num = 1024;
    vector<Byte> contents;
    int idx = 0;
    
};


#endif /* Cl_ROM_hpp */
