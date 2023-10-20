//
//  03_02.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/20/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int  main() {
    
    int a,b;
    
    cout << "请输入要反向输出的整数:";
    cin >> a;
    b = 0;
    
    do {
        cout << a % 10;
        a /= 10;
        b++;
    }
    while(a != 0) ;
        cout << "\n该整数的位数为: " << b << endl;
    
      return 0;
}
