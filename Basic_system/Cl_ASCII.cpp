//
//  Cl_ASCII.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include "Cl_ASCII.hpp"

void read()
{
//    ifstream myfile("/Basic_system/ASCII_table.csv");
    ifstream myfile("/Users/Daniel/Documents/GitHub/basic_system_cpp/basic_system_cpp/ASCII_table.csv");

    vector<string> ASCII_vec;
//    ofstream outfile("G:\\C++ project\\Read\\out.txt", ios::app);
    string temp;
    if (!myfile.is_open())
    {
        cout << "未成功打开文件" << endl;
    }
    while(getline(myfile,temp))
    {
        ASCII_vec.push_back(temp);
        cout << temp << endl;
    }
    myfile.close();
//    outfile.close();
}

