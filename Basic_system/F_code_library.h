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

#include "Cl_ROM.h"
#include "Cl_ROM.cpp"

//#include "Cl_ASCII.h"
//#include "Cl_ASCII.cpp"


/*
这部分是改变Byte内容的函数
*/


void change_byte_by_char(Byte & bt, const char & ch);

Byte change_contents_outside(Byte & bt, const short &ix, bool new_item);
/*
这部分是ASCII转化的函数
*/



// read the file
void read_ASCII(vector<ASCII_item> & ascii_vec);

// two function of change binary string into character. But it is too long to finish.
string char_to_binary(const char & ch);

string char_to_binary_sys(const char &ch);

char binary_to_char(const string & by2);






/*
 RAM 和 ROM 的生成函数
 */

void ram_report(const vector<RAM> & RAM_vec);
void rom_report(const vector<ROM> & RAM_vec);

vector<RAM> build_RAM(const int &RAM_num);

vector<ROM> build_ROM(const int &ROM_num);



/*
 这里是将一些东西写入到指定ROM中去
 */

void write_in_ROM(vector<ROM> &rom_v, const int &idx, const string &str);

vector<ROM> write_in_ROM_1(vector<ROM> &rom_v, const int &idx, const string &str);

void rom_usage(ROM & rom);
#endif /* F_code_library_hpp */

