//
//  03_01.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/20/23.
//

#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    cout << "请输入要比较的两个整数A和B，用空格间隔: ";
    cin >> a >> b;
    if (a == b)  {
        cout << "A=B" << endl;
    }
    else if (a < b) {
        cout << "A<B" << endl;
    }
    else if (a > b) {
        cout << "A>B" << endl;
    }
    return 0;
}
