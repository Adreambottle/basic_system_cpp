//
//  Cl_RAM.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

//

#include "Cl_RAM.hpp"
#include "Cl_Byte.cpp"

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


inline
RAM & RAM::change_length(int new_length_num){
    length_num = new_length_num;
    return *this;
}

inline
RAM & RAM::change_layer(int new_layer_num){
    layer_num = new_layer_num;
    return *this;
}



