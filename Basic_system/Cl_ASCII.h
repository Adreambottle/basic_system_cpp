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

// This is the item of ASCII
struct ASCII_item{

    // Construct the ascii_item in default way
    ASCII_item() = default;
    
    // Construct the ascii_item by inputing binary value and character sign
    ASCII_item(const std::string &s, const char &ch, const unsigned &i): code_by2(s), value(ch), idx(i){}

    
    // initialization value
    std::string code_by2 = "00000000";
    char value = ' ';
    unsigned idx;
    
    // show
    vector<char> code_vec();
    const ostream show(ostream &os) const;
    void show() const;

};



//// read the file
//void read_ASCII(vector<ASCII_item> & ascii_vec);
//
//// two function of change binary string into character. But it is too long to finish.
//string char_to_binary(const char & ch);
//string char_to_binary_sys(const char &ch);
//char binary_to_char(const string & by2);




#endif /* Cl_ASCII_hpp */
