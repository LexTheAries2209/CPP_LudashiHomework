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
    string a, b;
    cout << "请输入底数a和指数b，以空格间隔：";
    cin >> a >> b;
    
    int a1 = stoi(a);
    int b1 = stoi(b);
    
    int x = log(b1) / log(a1);  // 计算x
    
    cout << x << endl;
    
    return 0;
}

