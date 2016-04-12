//
//  main.cpp
//  STL-Deque
//
//  Created by sbx_fc on 15-3-16.
//  Copyright (c) 2015年 RG. All rights reserved.
//

#include <iostream>
#include <deque>

int main(int argc, const char * argv[]) {
    
    std::deque<int> mydeque;
    mydeque.push_back(1);
    mydeque.push_back(2);
    mydeque.push_back(3);
    
    for (std::deque<int>::iterator it = mydeque.begin(); it!=mydeque.end(); ++it){
        std::cout << *it << ' ' ;
    }
    std::cout << '\n';
    
    mydeque.clear();//清除所有元素
    mydeque.push_back (11);
    mydeque.push_back (22);
    mydeque.push_back (33);

    for (std::deque<int>::reverse_iterator rit = mydeque.rbegin(); rit!=mydeque.rend(); ++rit){
        std::cout << *rit << ' ' ;
    }
    std::cout << '\n';
    
    return 0;
}

