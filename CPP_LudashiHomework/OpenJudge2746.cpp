//
//  OpenJudge2746.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/10/23.
//

#include <iostream>
using namespace std;

int func(int n, int m) {
    int King = 0;
    for (int i = 2; i <= n; i++) {
        King = (King + m) % i;
    }
    return King + 1;
}

int main() {
    int n, m;
    
    while (cin >> n >> m && !(n == 0 && m == 0)) {
        int MonkeyKing = func(n, m);
        cout << MonkeyKing << endl;
    }
    return 0;
}
