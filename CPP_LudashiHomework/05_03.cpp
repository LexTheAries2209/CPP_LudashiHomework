//
//  05_03.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/28/23.
//

#include <iostream>
using namespace std;

class Point {
private:
    double PositionX, PositionY;
public:
    Point(double x = 0, double y = 0) {
        this->PositionX = x;
        this->PositionY = y;
    }
    
    void setXY(double x, double y) {
        this->PositionX = x;
        this->PositionY = y;
    }
    
    void setX(double x) {
        this->PositionX = x;
    }
    
    void setY(double y) {
        this->PositionY = y;
    }
    
    double getX() {
        return PositionX;
    }
    
    double getY() {
        return PositionY;
    }
};

class Rectangle: public Point {
private:
    double length,width;
public:
    Rectangle(double x, double y, double l, double w):Point(x,y) {
        this -> length = l;
        this -> width = w;
    }
    
    double getLength() {
        return length;
    }
    
    double getWidth() {
        return width;
    }
    
    double area() {
        return length * width;
    }
    double perimeter() {
        return (length + width) * 2;
    }
};

int main() {
    Point p;
    double PositionX,PositionY,length,width;
    cin >> PositionX >> PositionY >> length >> width;
    p.setXY(PositionX,PositionY);
    Rectangle rect(PositionX,PositionY,length,width);
    cout << rect.area() << endl;
    cout << rect.perimeter() << endl;
    return 0;
}
