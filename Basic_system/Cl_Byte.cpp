//
//  Cl_Byte.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//



#include "Cl_Byte.h"
#include "Header.h"


//
//class Byte{
//
//
//
//public:
//
//    inline void set_open() {
//        used = true;
//    }
//    inline void set_closed() {
//        contents = {0, 0, 0, 0, 0, 0, 0, 0};
//        used = false;
//    }
//
//    const ostream &show_contents(ostream &os) const;
//    Byte & change_contents(const short &ix, bool new_item);
//
//
//public:
//    vector<bool> contents = {0, 0, 0, 0, 0, 0, 0, 0};
//    const short sz = 8;
//    bool used = false;
//    int address = 0;
//
//};



// this function is to show the contents of the byte
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



// This function is to change the specific contents of one byte.

inline
Byte & Byte::change_contents(const short &ix, bool new_item){
    if (ix < 8 && ix >= 0)
        contents[ix] = new_item;
        if (used == false)
            set_open();
    return *this;
}



// 这部分有点问题，本来是想要写一个 Byte 的管理类的，但是好像发现这个不能这么写，一直报错，所以o我就把部分代码挪入到 Byte 类中去了，估计

//class Byte_mgt{
//public:
//    void set_open(Byte bt);
//    void set_closed(Byte bt);
//    void change_contents(Byte bt, const short &ix, bool new_item);
//};
//
//
//inline
//void Byte_mgt::set_open(Byte bt){
//    bt.used = 1;
//}
//
//inline
//void Byte_mgt::set_closed(Byte bt){
//    for (auto val : bt.contents){
//        val = false;
//    }
//    bt.used = 0;
//}
//
//
//
//
//inline
//void Byte_mgt::change_contents(Byte bt, const short &ix, bool new_item){
//    if (ix < 8 && ix >= 0)
//        bt.contents[ix] = new_item;
//}
