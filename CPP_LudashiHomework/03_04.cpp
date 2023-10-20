//
//  03_04.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/20/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int  main() {
    int line,i,space,star;
    cout << "请输入一个十以内行数：" ;
    cin >> line ;
    i = 1;
    star = i;
    space = line - i;
    if (line > 10) {
        cout << "你输入的行数太大了！" << endl;
    }
    else {
        do {
            space = line - i;
            while (space >= 1) {
                cout << " ";
                space--;
            }
            star = (2*i - 1);
            while (star >= 1) {
                cout << "*";
                star--;
            }
            space = line - i;
            while (space >= 1) {
                cout << " ";
                space--;
            }
            cout << endl;
            i++;
            star++;
            space--;
            
        } while (i < line);
    }
    return 0;
}
