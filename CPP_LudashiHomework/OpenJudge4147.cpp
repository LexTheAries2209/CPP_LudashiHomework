//
//  OpenJudge4147.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/3/23.
//

#include <iostream>
#include <string>

using namespace std;

void func(int n, char a, char b, char c) {
  if(n == 1) {
    cout << n << ":" << a << "->" << c << endl;
  } else {
    func(n-1, a, c, b);
    cout << n << ":" << a << "->" << c << endl;
    func(n-1, b, a, c);
  }
}

int main() {
    int n;
    string a, b, c;
    
    cout << "请依次输入圆盘数量和三个柱子的名称，以空格间隔：" ;
    cin >> n >> a >> b >> c;
    
    if(cin.fail() || n <= 0) {
        cout << "n必须为正整数！" << endl;
        return 0;
      }
    
    func(n, a[0], b[0], c[0]);
  
    return 0;
}
