//
//  Cl_RAM.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

//

#include "Cl_RAM.h"
#include "Cl_Byte.h"






// Start the RAM

inline
RAM & RAM::start(){
    int count = 0;
    for(int i = 0; i != length_num; ++i){
        Byte bt;
        bt.address = count;
        contents.push_back(bt);
        ++ count;
    }
    return *this;
}


// change the length of the RAM
inline
RAM & RAM::change_length(int new_length_num){
    length_num = new_length_num;
    return *this;
}



// change the layer of the RAM 
inline
RAM & RAM::change_layer(int new_layer_num){
    layer_num = new_layer_num;
    return *this;
}


