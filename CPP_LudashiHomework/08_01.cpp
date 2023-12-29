//
//  08_01.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;
    int number;

    cout << "请输入若干个元素，以空格间隔，使用Control+D结束：";
    
    //读取输入
    while (cin >> number) {
        numbers.push_back(number);
    }

    //删除第一个元素
    if (!numbers.empty()) {
        numbers.pop_front();
    }
    
    //删除最后一个元素
    if (!numbers.empty()) {
        numbers.pop_back();
    }

    //输出掐头去尾的剩余元素
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


