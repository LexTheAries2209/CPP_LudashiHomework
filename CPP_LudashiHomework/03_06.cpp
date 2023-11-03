//
//  03_06.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/21/23.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int  main() {
    double a,b,c,d,e,f,g;
    cout << "请输入一元二次方程ax^2+bx+c=0的三个参数a、b、c，以空格间隔：";
    cin >> a >> b >> c;
    d = b*b-4*a*c;
    e = -b / (2*a);
    if (a == 0) {
        cout << "a不能为0！"<< endl;
        return 0;
    }
    
    if (d < 0) {
        cout << "该方程没有实数根！" << endl;
        return 0;
    }
    
    if (d == 0) {
        cout << "x1 = x2 = " << e << endl;
        return 0;
    }
    
    if (d > 0) {
        f = (sqrt(d)-b) / (2*a);
        g = (-sqrt(d)-b) / (2*a);
        cout << fixed;
        cout << setprecision(6);
        cout << "x1 = " << f << ", x2 = " << g << endl;
        return 0;
    }
    cout << "出错！" << endl;
    return 0;
}
