//
//  TimerKeeper.h
//  cppVirtual
//
//  Created by sbx_fc on 15-3-3.
//  Copyright (c) 2015年 RG. All rights reserved.
//

#ifndef __cppVirtual__TimerKeeper__
#define __cppVirtual__TimerKeeper__

#include <stdio.h>

//基类
class BaseClass
{
public:
    BaseClass();
    
    /**
     * 使用不同的基类声明方式
     * 查看运行结果。
    */
    ~BaseClass();
    //virtual ~BaseClass();
};

//继承类1
class DerivedClass: public BaseClass
{
public:
    DerivedClass();
    ~DerivedClass();
};



#endif /* defined(__cppVirtual__TimerKeeper__) */
