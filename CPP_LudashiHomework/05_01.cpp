//
//  05_01.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/28/23.
//
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14159 * radius * radius ;
    }
    double circumference() {
        return 3.14159 * 2 * radius;
    }
};

int main() {
    double radius;
    cin >> radius;
    
    Circle Circle(radius);
    
    cout << Circle.area() << endl;
    cout << Circle.circumference() << endl;
    
    return 0;
}
