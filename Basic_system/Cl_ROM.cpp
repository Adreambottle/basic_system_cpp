//
//  Cl_ROM.cpp
//  Basic_system
//
//  Created by Daniel on 2020/3/1.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "Cl_ROM.h"



inline
ROM & ROM::start_1(const int &rom_index){
    int count = 0;
    for(int i = 0; i != length_num; ++i){
        Byte bt;
        bt.address = count;
        contents.push_back(bt);
        ++ count;
    }
    idx = rom_index;
    return *this;
}


// change the length of the RAM
inline
ROM & ROM::change_length(int new_length_num){
    length_num = new_length_num;
    return *this;
}



// change the layer of the RAM
inline
ROM & ROM::change_layer(int new_layer_num){
    layer_num = new_layer_num;
    return *this;
}

