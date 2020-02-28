//
//  main.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//


#include <iostream>
#include <unistd.h>
#include "Header.h"
#include "Cl_RAM.cpp"
//#include "Cl_Byte.hpp"

//#include "Cl_ASCII.hpp"
//#include "Cl_ASCII.cpp"



//#include "BIOS.cpp"
//#include "Cl_Byte.cpp"






void change_byte_by_char(Byte & bt, const char & ch){
    string by2 = char_to_binary_sys(ch);
    int count = 0;
    for (auto item : by2){
        bool bool_value = ((item == '0') ? false : true);
        bt.change_contents(count, bool_value);
        count++;
    }
};


void input_1(Byte &bt){
    bt.change_contents(7, 1);
    bt.used = 1;
};



int main() {
    
    
    
    
    
//    Byte bt1;
//    change_byte_by_char(bt1, 'a');
//    bt1.show_contents(cout);
    
    RAM ram;
    ram.start();
    int count = 100;
    string s = "This is a test string";
    for(int i = 0; i < count; ++i){
        Byte bt = ram.contents[i];
        change_byte_by_char(bt, s[i]);
        bt.show_contents(cout);
        if (i > s.size())
            break;
    }
    
    
    
//    const int MAXPATH=250;
//    char buffer[MAXPATH];
//    getcwd(buffer, MAXPATH);
//    printf("The current directory is: %s", buffer);

//    read_ASCII();
    

//    Byte_mgt bm;
//    bm.set_open(test_bt);
//    bm.change_contents(test_bt, 7, 1);
//    test_bt.show_contents(cout);
//
    

    
    
    
//    vector<ASCII_item> ai;
//    read_ASCII(ai);
//    ai[0].code_by2 = "00000000";   // 不知道为什么会出错
//    ai[0].value = ' ';
//
//    for(auto item : ai){
////        item.show()
//        cout << "by2 is " << item.code_by2
//        << " value is " << item.value
//        << " index is " << item.idx << endl;
//    }
    
    
    
    
    
//    RAM test_RAM;
//    test_RAM.start();
//    input_1(test_RAM.contents[0]);
//
//
    
    
    
//    int count = 0;
//    for(auto item : test_RAM.contents){
//        item.show_contents(cout);
//        if (count > 10)
//            break;
//        ++count;
//    }
        

    return 0;
}



