//
//  Cl_ASCII.hpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#ifndef Cl_ASCII_hpp
#define Cl_ASCII_hpp

#include <stdio.h>
#include "Header.h"
#include <fstream>

//void read_ASCII(vector<ASCII_item> ascii_vec);


struct ASCII_item{

    ASCII_item() = default;
    ASCII_item(const std::string &s, const char &ch, const unsigned &i): code_by2(s), value(ch), idx(i){}

    std::string code_by2 = "00000000";
    char value = ' ';
    unsigned idx;

    vector<char> code_vec();

};

void read_ASCII(vector<ASCII_item> & ascii_vec);

#endif /* Cl_ASCII_hpp */
