//
//  main.cpp
//  STL-Map
//
//  Created by sbx_fc on 15-3-17.
//  Copyright (c) 2015年 RG. All rights reserved.
//

#include <iostream>
#include <map>




int main(int argc, const char * argv[]) {

    typedef std::map<char, int> MapType;
    MapType myMap;
    myMap.insert(std::pair<char, int>('f', 6));
    myMap.insert(std::pair<char, int>('e', 5));
    myMap.insert(std::map<char, int>::value_type('d', 4));
    myMap.insert(MapType::value_type('c', 3)); // all standard containers provide this typedef
    myMap.insert(std::make_pair('b', 2));      // can also use the utility function make_pair
    myMap.insert({'a', 1});                    // using C++11 initializer list
    
     /*
     * map被修改时会对所有key值自动由低往高排列
     * 所以,map.begin()会指向key值最小的元素
     */
    MapType::iterator iter = myMap.begin();
    
    //清除第一个元素
    myMap.erase(iter);
    
    //map中元素数量
    std::cout << "Size of myMap: " << myMap.size() << '\n';
    
    //查找key值为'c'的元素
    char c = 'c';
    iter = myMap.find(c);
    if (iter != myMap.end() )
        std::cout << "Value is: " << iter->second << '\n';
    else
        std::cout << "Key is not in myMap" << '\n';
    
    //删除key值为'd'的元素,成功会返回1，否则返回0
    unsigned long n = myMap.erase('d');
    if(n == 1){
        std::cout << "delete key 'd'" << '\n';
    }
    
    //输出map中所有元素
    MapType::iterator it;
    for(it = myMap.begin(); it != myMap.end(); it++){
        std::cout<<"{" <<it->first<<","<<it->second<<"}" <<std::endl;
    }
    
    //清空map
    myMap.clear();
    
    
    //遍历map中所有数值
    std::map <std::string, int> data{
        { "Bobs score", 10 },
        { "Martys score", 15 },
        { "Mehmets score", 34 },
        { "Rockys score", 22 },
        { "Rockys score", 23 } /*overwrites the 22 as keys are identical */
    };
    
    // Iterate over the map and print out all key/value pairs.
    for (const auto& element : data)
    {
        std::cout << "{" << element.first;
        std::cout << "," << element.second <<"}"<< '\n';
    }
    
    return 0;
}
