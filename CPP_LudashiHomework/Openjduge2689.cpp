//
//  Openjduge2689.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/9/23.
//

#include <iostream>
#include <string>
using namespace std;

string Func(const string& str) {
    string result = str;
    //cout << "请输入要转换大小写的英文：";
    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        } else if (c >= 'a' && c <= 'z') {
            c -= 32;
        }
    }
    return result;
}

int main() {
    string str;
    getline(cin, str);
    
    string Output = Func(str);
    
    cout << Output << endl;
    
    return 0;
}
