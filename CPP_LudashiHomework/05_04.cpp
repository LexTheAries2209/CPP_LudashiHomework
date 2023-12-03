//
//  05_04.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/29/23.
//

#include<iostream>
using namespace std;

class Student {
private:
    string name;
    string className;
    int id;
    float score;
    static int count;
    
public:
    Student(string n, string c, int i, float s) {
        name = n;
        className = c;
        id = i;
        score = s;
        count++;
    }

void display() {
    cout << "姓名: " << name << endl;
    cout << "班级: " << className << endl;
    cout << "学号: " << id << endl;
    cout << "分数: " << score << endl;
    char grade;
    if(score>=90) grade = 'A';
    else if(score>=80) grade = 'B';
    else if(score>=70) grade = 'C';
    else grade = 'D';
    cout << "成绩: " << grade << endl;
    }

static void DisplayCount() {
    cout << "学生总数: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1("张三", "影视技术", 001, 85);
    Student s2("李四", "数字媒体技术", 002, 95);
    Student s3("王五", "影视摄影与制作", 003, 60);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    Student::DisplayCount();

return 0;
}
