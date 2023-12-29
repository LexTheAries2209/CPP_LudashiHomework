//
//  08_04.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 12/29/23.
//

#include <forward_list>
#include <iostream>

template <typename T>
void filterList(std::forward_list<T>& list, T threshold) {
    list.remove_if([threshold](const T& value) { return value < threshold; });
}

int main() {
    std::forward_list<int> list;
    int threshold;

    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    std::cout << "Enter numbers (non-number to end): ";
    int number;
    while (std::cin >> number) {
        list.push_front(number);
    }

    filterList(list, threshold);

    for (int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

