//
//  Cl_Byte.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "Cl_Byte.hpp"
#include "Header.h"

class Byte{

    
    
public:
    
    const ostream &show_contents(ostream &os) const;
    Byte & change_contents(const short &ix, bool new_item);
    
    vector<bool> contents = {0, 0, 0, 0, 0, 0, 0, 0};
    const short sz = 8;
    bool used = false;
    int address = 0;
    
};


inline
    const ostream &Byte::show_contents(ostream &os) const {
    os << contents[0] << " "
       << contents[1] << " "
       << contents[2] << " "
       << contents[3] << " "
       << contents[4] << " "
       << contents[5] << " "
       << contents[6] << " "
       << contents[7] << " "
       << "\t"
       << address << "\t"
       << (used ? "used" : "unused") << endl;
    return os;
}


inline
Byte & Byte::change_contents(const short &ix, bool new_item){
    if (ix < 8 && ix >= 0)
        contents[ix] = new_item;
    return *this;
}

