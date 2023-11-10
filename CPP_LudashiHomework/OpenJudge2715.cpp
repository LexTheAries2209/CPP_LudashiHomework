//
//  OpenJudge2715.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/9/23.
//

#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string StudentName;
    int AvgScore;
    int ClassScore;
    bool isLeader;
    bool isWestern;
    int Paper;
    int PrizeCount;
    
    Student(const string& n, int as, int cs, bool l, bool w, int p)
    : StudentName(n), AvgScore(as), ClassScore(cs), isLeader(l), isWestern(w), Paper(p), PrizeCount(0) {}
};

void bubble(vector<Student>& students) {
    for (int i = 0; i < students.size() - 1; i++) {
        for (int j = 0; j < students.size() - i - 1; j++) {
            if (students[j].PrizeCount < students[j + 1].PrizeCount) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}
int main() {
    int N;
    cin >> N;
    
    vector<Student> students;
    
    for (int i = 0; i < N; i++) {
            string name;
            int AvgScore, ClassScore, Paper;
            char isLeader, isWestern;

            cin >> name >> AvgScore >> ClassScore >> isLeader >> isWestern >> Paper;

            students.emplace_back(name, AvgScore, ClassScore, (isLeader == 'Y'), (isWestern == 'Y'), Paper);
        }

        for (auto& student : students) {
            if (student.AvgScore > 80 && student.Paper >= 1) {
                student.PrizeCount += 8000;
            }

            if (student.AvgScore > 85 && student.ClassScore > 80) {
                student.PrizeCount += 4000;
            }

            if (student.AvgScore > 90) {
                student.PrizeCount += 2000;
            }

            if (student.AvgScore > 85 && student.isWestern) {
                student.PrizeCount += 1000;
            }

            if (student.ClassScore > 80 && student.isLeader) {
                student.PrizeCount += 850;
            }
        }

            bubble(students);
    
    int totalPrize = 0;
    for (const auto& student : students) {
        totalPrize += student.PrizeCount;
    }
    
    cout << students[0].StudentName << endl;
    cout << students[0].PrizeCount << endl;
    cout << totalPrize << endl;
    
    return 0;
}
