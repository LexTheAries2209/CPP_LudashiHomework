//
//  03_03.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/20/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int  main() {
    int a,b;
    cout << "请输入一个整数：" ;
    cin >> a ;
    b = a % 7 ;
    switch (b) {
        case 0 :
            cout << "星期日" << endl;
            break;
        case 1 :
            cout << "星期一" << endl;
            break;
        case 2 :
            cout << "星期二" << endl;
            break;
        case 3 :
            cout << "星期三" << endl;
            break;
        case 4 :
            cout << "星期四" << endl;
            break;
        case 5 :
            cout << "星期五" << endl;
            break;
        case 6 :
            cout << "星期六" << endl;
            break;
        default :
            cout << "出错" << endl ;
    }
    return 0;
}
