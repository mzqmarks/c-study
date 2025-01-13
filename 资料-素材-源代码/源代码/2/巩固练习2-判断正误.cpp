#include <iostream>
#include <string> 
using namespace std;

int main(){

  string waxberry,grape; 

  cout << "输入你喜欢吃的水果。" << endl;
  cin >> waxberry;
  cout << "还有其他水果吗？" << endl;
  cin >> grape; 
  cout << waxberry + "和grape真好吃！";

  return 0;
}
