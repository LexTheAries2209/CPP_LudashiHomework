//
//  OpenJudge2753.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/3/23.
//

#include <iostream>
using namespace std;

int func(int n){
    if(n <= 2) return 1;
    return func(n-1) + func(n-2);
}

int main() {
    int n;
    cout << "请输入要测试的行数n和要测试的第a项，以换行间隔：" << endl;
    cin >> n;
    
    if(cin.fail() || n <= 0) {
        cout << "n必须为正整数！" << endl;
        return 0;
      }
    
    int results[n];
  
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(cin.fail() || a <= 0) {
            cout << "a必须为正整数！" << endl;
            return 0;
          }
        results[i] = func(a);
    }
    
    cout << endl;
    
    for(int i = 0; i < n; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
