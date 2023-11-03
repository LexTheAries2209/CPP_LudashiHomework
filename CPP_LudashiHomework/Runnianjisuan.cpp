//
//  Runnianjisuan.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/19/23.
//

using namespace std;

//    闰年计算 Pro
//    要求：
//    1、输入3个年份，并分别输出是否是闰年。
//    2、输入1个年份，输出是否是闰年，并输出该年份下一个闰年是多少年后，是哪一年。
//    3、随机输入3个年份，按照从小年份到大年份，依次排序输出，并根据顺序输出是否是闰年。


//要求一 判断 是否闰年函数
    bool isleapyear(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return true;
        }
        return false;
    }

//要求二 寻找下一个闰年
    int findNextLeapYear(int year) {
        while (true) {
            year++;
            if (isleapyear(year)) {
                return year;
            }
        }
    }

//交换年份
void swapYears(int& year1, int& year2) {
    int temp = year1;
    year1 = year2;
    year2 = temp;
}




int main() {
    int year1, year2, year3;
    
        // 输入3个年份
        cout << "请输入3个年份,中间用空格间隔：";
        cin >> year1 >> year2 >> year3;

        // 输出是否是闰年
        cout << year1 << "年" << (isleapyear(year1) ? "是" : "不是") << "闰年。\n";
        cout << year2 << "年" << (isleapyear(year2) ? "是" : "不是") << "闰年。\n";
        cout << year3 << "年" << (isleapyear(year3) ? "是" : "不是") << "闰年。\n";

        // 排序年份
        if (year1 > year2) {
            swapYears(year1, year2);
        }
        if (year1 > year3) {
            swapYears(year1, year3);
        }
        if (year2 > year3) {
            swapYears(year2, year3);
        }

        // 输出排序后的年份和是否是闰年
        cout << "排序后的年份是：" << year1 << " " << year2 << " " << year3 << "\n";
        cout << year1 << "年" << (isleapyear(year1) ? "是" : "不是") << "闰年。\n";
        cout << year2 << "年" << (isleapyear(year2) ? "是" : "不是") << "闰年。\n";
        cout << year3 << "年" << (isleapyear(year3) ? "是" : "不是") << "闰年。\n";

        // 输出下一个闰年
        int nextLeapYear = findNextLeapYear(year3);
        cout << year3 << "年的下一个闰年是" << nextLeapYear << "年。\n";

        return 0;
    }
