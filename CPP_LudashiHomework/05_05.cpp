//
//  05_05.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/3/23.
//

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double length, width, SideA, SideB, SideC;
    
public:
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
};

class Circle: public Shape {
private:
    double radius;
    
public:
    Circle(double r){
        radius = r;
    }
    
void calculateArea() override {
    double area = 3.14 * radius * radius;
    cout << "圆的面积是: " << area << endl;
    }
    
void calculatePerimeter() override {
    double perimeter = 2 * 3.14 * radius;
    cout << "圆的周长是: " << perimeter << endl;
    }
};

class Rectangle: public Shape {
public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }
    
void calculateArea() override {
    double area = length * width;
    cout << "矩形面积是: " << area << endl;
    }
    
void calculatePerimeter() override {
    double perimeter = 2 * (length + width);
    cout << "矩形周长是: " << perimeter << endl;
    }
};

class Triangle: public Shape {
public:
    Triangle(double a, double b, double c){
        SideA = a;
        SideB = b;
        SideC = c;
    }
    
    
void calculateArea() override {
    double p = (SideA + SideB + SideC) / 2;
    double area = sqrt(p*(p-SideA)*(p-SideB)*(p-SideC));
    cout << "三角形面积是: " << area << endl;
    }
    
void calculatePerimeter() override {
    double perimeter = SideA + SideB + SideC;
    cout << "三角形周长是: " << perimeter << endl;
    }
};

int main(){
    Circle c(5);
    c.calculateArea();
    c.calculatePerimeter();
    cout << endl;

    Rectangle r(10,5);
    r.calculateArea();
    r.calculatePerimeter();
    cout << endl;
    
    Triangle t(3,4,5);
    t.calculateArea();
    t.calculatePerimeter();

return 0;
}
