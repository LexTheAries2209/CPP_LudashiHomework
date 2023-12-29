//
//  08_03.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <iostream>
#include <vector>
using namespace std;

// 排列元素
void uniqueSort(vector<int>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> numbers;
    int number;

    cout << "请输入一系列元素，以空格间隔，并以Control+D结束：";

    // 读取输入的元素
    while (cin >> number) {
        numbers.push_back(number);
    }

    // 清除重复的元素
    uniqueSort(numbers);
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

    // 输出排列好的元素
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

