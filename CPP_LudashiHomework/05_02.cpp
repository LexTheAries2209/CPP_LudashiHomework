//
//  05_02.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/28/23.
//

#include <iostream>
using namespace std;

class Triangle {
private:
    double SideA,SideB,SideC;
public:
    Triangle(double a,double b,double c) {
        SideA = a;
        SideB = b;
        SideC = c;
    }
    void type() {
        if(SideA == SideB && SideB == SideC) {
            cout << "等边三角形" << endl;
        }
        else if(SideA == SideB || SideA == SideC || SideB == SideC) {
            cout << "等腰三角形" << endl;
        }
        else if(SideA + SideB <= SideC || SideB + SideC <= SideA || SideA + SideC <= SideB) {
            cout << "无法构成三角形" << endl;
        }
        else {
            cout << "不等边三角形" << endl;
        }
    }
};

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    Triangle t(a,b,c);
    t.type();
    return 0;
}
