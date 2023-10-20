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
    int number , digit ;
    cout << "请输入要反向输出的整数:" ;
    cin >> number ;
    digit = 0 ;
    do {
        cout << number % 10 ;
        number /= 10 ;
        digit++ ;
      } while(number != 0) ;
      
      cout << "\n该整数的位数为: " << digit << endl ;

      return 0 ;
}
