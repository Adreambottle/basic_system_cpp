//
//  Cl_ASCII.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "Cl_ASCII.hpp"

//struct ASCII_item{
//
//    ASCII_item() = default;
//    ASCII_item(const std::string &s, const char &ch, const unsigned &i): code_by2(s), value(ch), idx(i){}
//
//    std::string code_by2 = "00000000";
//    char value = ' ';
//    unsigned idx;
//
//    vector<char> code_vec();
//
//};

//ASCII_item as = {"01110100", 'a', 97};

void read_ASCII(vector<ASCII_item> & ascii_vec)
{
//    ifstream myfile("/Basic_system/ASCII_table.csv");
    ifstream myfile("/Users/Daniel/Documents/GitHub/basic_system_cpp/basic_system_cpp/ASCII_table.csv");

    string temp;
    if (!myfile.is_open()){
        cout << "未成功打开文件" << endl;
    }
    int num = 1;
    while(getline(myfile, temp)){
        ASCII_item ascii_i(temp.substr(0, 8), temp[9], num++);
        ascii_vec.push_back(ascii_i);
//        cout << temp.substr(0, 8) << endl;
    }
    myfile.close();

//    return ASCII_vec
}


vector<char> ASCII_item::code_vec(){
    vector<char> vec_char;
    for (auto c : code_by2){
        vec_char.push_back(c);
    }
    return vec_char;
}




