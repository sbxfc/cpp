//
//  main.cpp
//  cppVirtual
//
//  Created by sbx_fc on 15-3-3.
//  Copyright (c) 2015年 RG. All rights reserved.
//

#include <iostream>
#include "MyClass.h"

int main(int argc, const char * argv[]) {
    
    //==========多态基类声明virtual析构函数==========
    
    BaseClass* base = new DerivedClass();
    delete base;
    
    std::cout << "--------\n";
    
    DerivedClass* derived = new DerivedClass();
    delete derived;
    
    //===========================================

    return 0;
}
