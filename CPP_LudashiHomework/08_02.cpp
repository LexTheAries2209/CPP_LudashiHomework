//
//  08_02.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> queue;
    string command;
    int number;

    while (true) {
        cin >> command;

        //使用push加入元素
        if (command == "push") {
            cin >> number;
            queue.push_back(number);
        }
        //使用pop去除元素
        else if (command == "pop") {
            if (!queue.empty()) {
                queue.pop_front();
            }
        }
        //使用print打印现在的列表
        else if (command == "print") {
            for (int num : queue) {
                cout << num << " ";
            }
            cout << endl;
        }
        //输入Exit退出元素
        else if (command == "Exit") {
            break;
        }
    }

    return 0;
}

