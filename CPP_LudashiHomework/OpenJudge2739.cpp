//
//  OpenJudge2739.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/9/23.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long double a, b, x1;
    //cout << "请输入底数a和指数b，以换行间隔：";
    cin >> a;
    cin >> b;
    
    double x = log(b) / log(a);
    x1 = floor(x);
    cout << x1 << endl;
    
    return 0;
}
