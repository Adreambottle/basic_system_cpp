//
//  main.cpp
//  Basic_system
//
//  Created by Daniel on 2020/2/27.
//  Copyright © 2020 Daniel. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "Cl_RAM.cpp"
#include "Cl_RAM.hpp"




int main() {
    Byte test1;
    test1.change_contents(4, 1);
    test1.show_contents(cout);
    
    return 0;
}



