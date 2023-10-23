//
//  03_07.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 10/23/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand((unsigned int)time(NULL));
  
  int player,computer;

  do {
      computer = rand() % 3;
      cout << "请输入您的选择: 0代表石头，1代表剪刀，2代表布: " ;
      cin >> player;
      
      if (player < 0 || player > 2) {
          cout << "请输入0，1或2！" << endl;
      }
      else {
          int i = player - computer;
          
          switch(i) {
                  
              case -2: case 1:
                  cout << "你赢了！" << endl;
                  break;
              case -1: case 2:
                  cout << "你输了！" << endl;
                  break;
              case 0:
                  cout << "打平了！" << endl;
                  break;
          }
          
          cout << "您选择了: " ;
          switch(player) {
                  
              case 0:
                  cout << "石头";
                  break;
              case 1:
                  cout << "剪刀";
                  break;
              case 2:
                  cout << "布";
                  break;
          }
          
          cout << ", 电脑选择了：";
          
          switch(computer) {
                  
              case 0:
                  cout << "石头"<< endl;
                  break;
              case 1:
                  cout << "剪刀"<< endl;
                  break;
              case 2:
                  cout << "布"<< endl;
                  break;
          }
      }
    cout << "在玩一次？（输入y/n）: ";
    
  }while(cin >> ws && cin.get() == 'y');

  return 0;
}
