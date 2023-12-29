//
//  08_04.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <forward_list>
#include <iostream>
using namespace std;

template <typename T>
void filterList(forward_list<T>& list, T threshold) {
    list.remove_if([threshold](const T& value) { return value < threshold; });
}

int main() {
    forward_list<int> list;
    int threshold;
    
    //读取阈值
    cout << "输入阈值: ";
    cin >> threshold;
    
    //读取元素
    cout << "输入元素，以空格间隔，以End结尾: ";
    int number;
    while (cin >> number) {
        list.push_front(number);
    }
    
    //去掉小于阈值的数字
    filterList(list, threshold);
    
    //输出元素
    for (int num : list) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

