//============================================================================
// Name        : Map.cpp
// Author      : wenbing.wang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//数据的插入--第一种：用insert函数插入pair数据
#include <map>

#include <string>

#include <iostream>

using namespace std;

int main()

{
    typedef map<float, string> CustomMap;
    CustomMap custMap;

    custMap.insert(pair<float, string>(0.2358, "student_one"));

    custMap.insert(pair<float, string>(0.132434, "student_two"));

    custMap.insert(pair<float, string>(1.32423, "student_three"));

    CustomMap::iterator iter;
    int mCount = 0;
    for(iter = custMap.begin(); iter != custMap.end(); iter++, mCount++) {
        if (mCount < 2) {
            cout<<iter->first<<' '<<iter->second<<endl;
        }
    }

    cout<<custMap.at(0.2358)<<endl;
    custMap.clear();
    cout<<custMap.size()<<endl;
}
