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
    bt.used = 1;
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



vector<RAM> build_RAM(const int &RAM_num = 3){
    vector<RAM> RAM_vec;
    for (int i = 0; i != RAM_num; ++i){
        RAM ram;
        ram.start_1(i);
        RAM_vec.push_back(ram);
    }
    return RAM_vec;
}

vector<ROM> build_ROM(const int &ROM_num = 1024){
    vector<ROM> ROM_vec;
    for (int i = 0; i != ROM_num; ++i){
        ROM rom;
        rom.start_1(i);
        ROM_vec.push_back(rom);
    }
    return ROM_vec;
}



void ram_report(const vector<RAM> & RAM_vec){
    for(auto ram : RAM_vec){
        cout << "This is No " << ram.idx
        << " ram and the length is " << ram.layer_num << "."
        << endl;
    }
}

void rom_report(const vector<ROM> & RAM_vec){
    for(auto rom : RAM_vec){
        cout << "This is No " << rom.idx
        << " rom and the length is " << rom.layer_num << "."
        << endl;
    }
}




void write_in_ROM(vector<ROM> &rom_v, const int &idx, const string &str){
    ROM *tar_rom = &(rom_v[idx]);
    const int rom_sz = (*tar_rom).length_num;
    const size_t str_sz = str.length();
    if (str_sz < rom_sz){
        for(int i = 0; i != str_sz; ++i){
            Byte &bt = (*tar_rom).contents[i];
            change_byte_by_char(bt, str[i]);
            bt.show_contents(cout);
        }
    }
};

 vector<ROM> write_in_ROM_1(vector<ROM> &rom_v, const int &idx, const string &str){
    ROM *tar_rom = &(rom_v[idx]);
    const int rom_sz = (*tar_rom).length_num;
    const size_t str_sz = str.length();
    if (str_sz < rom_sz){
        for(int i = 0; i != str_sz; ++i){
            Byte bt = (*tar_rom).contents[i];
            change_byte_by_char(bt, str[i]);
            bt.show_contents(cout);
        }
    }
     return rom_v;
};



void rom_usage(ROM & rom){
    cout << "The index of this rom is " << rom.idx << endl;
    cout << "The size of this rom is " << rom.length_num << endl;
    vector<bool> usage_cond;
    int count = 0;
    for(auto bt : rom.contents){
        usage_cond.push_back(bt.used);
        cout << count << "\t" << bt.used << endl;
        
    }
}
