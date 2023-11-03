//
//  OpenJudge2753.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/3/23.
//

#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 2) return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    int a;
    cin >> a;
    
    int result = fibonacci(a);
    cout << result << endl;
  }

  return 0;
}
