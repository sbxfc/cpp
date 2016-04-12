//
//  main.cpp
//  STL-List
//
//  Created by sbx_fc on 15-3-13.
//  Copyright (c) 2015年 RG. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>

void printNum(int& value)
{
    std::cout << value << " ";
}

int main(int argc, const char * argv[])
{
    //创建列表并赋值
    std::list<int> myList;
    myList.push_front(2);
    myList.push_front(1);
    myList.push_back(3);
    myList.push_back(4);
    myList.push_back(4);
    
    //使用迭代器输出全部元素
    std::list<int>::iterator i;
    for (i = myList.begin(); i != myList.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    
    //获取list里'值'为4的元素个数
    std::size_t valueOfNum4 = std::count(myList.begin(), myList.end(), 4);
    std::cout << valueOfNum4 << " ";
    std::cout << std::endl;
    
    //删除最后一个元素
    myList.pop_back();
    //删除第一个元素
    myList.pop_front();

    //for_each,输出全部元素
    std::for_each(myList.begin(), myList.end(), printNum);
    std::cout << std::endl;
    
    return 0;
}

