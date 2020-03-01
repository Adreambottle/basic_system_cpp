//
//  F_code_library.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/29.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "F_code_library.h"

void change_byte_by_char(Byte & bt, const char & ch){
    string by2 = char_to_binary_sys(ch);
    int count = 0;
    for (auto item : by2){
        bool bool_value = ((item == '0') ? false : true);
        bt.change_contents(count, bool_value);
        
        count++;
    }
}


Byte change_contents_outside(Byte & bt, const short &ix, bool new_item){
    bt.change_contents(ix, new_item);
    return bt;
}


/*
 这部分是ASCII转化的函数
 */

string char_to_binary_sys(const char &ch){
    int num = (int)ch;
    
    string by2 = "00000000";
    for(int i = 8; i >= 0; i--){
        if(num & (1<<i))
            by2[7-i] = '1';
        else
            by2[7-i] = '0';
    }
    
    return by2;
}

// Changing binary system into character
// Unfinished

char binary_to_char(const string & by2){
    int i = std::stoi(by2, nullptr, 2);
    char ch;
    switch (i) {
        case 97:
            ch = 'a';
            break;

        default:
            ch = ' ';
            break;
    }

    return ch;
}

// 想一个 int.2 -> int.10 -> char 的方法

