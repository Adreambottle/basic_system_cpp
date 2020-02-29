//
//  F_code_library.hpp
//  Basic_system
//
//  Created by Daniel on 2020/2/29.
//  Copyright © 2020 Daniel. All rights reserved.
//

#ifndef F_code_library_hpp
#define F_code_library_hpp


#include <stdio.h>
#include "Header.h"

#include "Cl_Byte.h"
#include "Cl_Byte.cpp"

#include "Cl_RAM.h"
#include "Cl_RAM.cpp"

#include "Cl_ASCII.h"
//#include "Cl_ASCII.cpp"


/*
这部分是改变Byte内容的函数
*/


void change_byte_by_char(Byte & bt, const char & ch);


/*
这部分是ASCII转化的函数
*/



// read the file
void read_ASCII(vector<ASCII_item> & ascii_vec);

// two function of change binary string into character. But it is too long to finish.
string char_to_binary(const char & ch);

string char_to_binary_sys(const char &ch);

char binary_to_char(const string & by2);

#endif /* F_code_library_hpp */
