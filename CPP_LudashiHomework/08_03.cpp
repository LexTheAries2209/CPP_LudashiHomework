//
//  08_03.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//排列元素
void uniqueSort(vector<int>& vec) {
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

int main() {
    vector<int> numbers;
    int number;

    cout << "请输入一系列元素，以空格间隔，并以Control+D结束：";
    
    //读取输入的元素
    while (cin >> number) {
        numbers.push_back(number);
    }

    //清除重复的元素
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    uniqueSort(numbers);

    //输出排列好的元素
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
