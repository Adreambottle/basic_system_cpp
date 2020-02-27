//
//  Cl_RAM.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "Cl_RAM.hpp"

class RAM{

public:
    RAM & change_length(int new_length_num);
    RAM & change_layer(int new_layer_num);

private:

//    const short unit_num = 8;
    int length_num;
    int layer_num = 3;

};

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




class Byte{

    
    
public:
    
    const ostream &show_contents(ostream &os) const;
    Byte & change_contents(const short &ix, bool new_item);
    
    vector<bool> contents = {0, 0, 0, 0, 0, 0, 0, 0};
    const short sz = 8;
    bool used = false;
    vector<int> address;
    
};


inline
    const ostream &Byte::show_contents(ostream &os) const {
    os << "The contents of this bytes is: " << "\n"
       << contents[0] << " "
       << contents[1] << " "
       << contents[2] << " "
       << contents[3] << " "
       << contents[4] << " "
       << contents[5] << " "
       << contents[6] << " "
       << contents[7] << " " << endl;
    return os;
}


inline
Byte & Byte::change_contents(const short &ix, bool new_item){
    if (ix < 8 && ix >= 0)
        contents[ix] = new_item;
    return *this;
}
