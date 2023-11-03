//
//  03_05.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/21/23.
//

#include <iostream>
using namespace std;

int  main() {
    int a,b;
    cout << "请输入两个正整数作为范围，用空格间隔：";
    cin >> a >> b;
    if ((b <= a)||(a < 0)||(b < 0)) {
        cout << "你输入了无法计算的两个值，请重新输入。";
    } else {
        for(int i=a; i<=b; i++) {
            int k = 1;
            for(int j=2; j<=sqrt(i); j++) {
                if(i % j == 0) {
                    k = 0;
                    break;
                }
            }
            if(k == 1)
                cout << i << " ";
        }
    }
    return 0;
}
