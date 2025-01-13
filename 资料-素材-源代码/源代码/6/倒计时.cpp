#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	
	int i = 3;

	cout << "倒计时 " << i << " 秒" << endl;
	i--;
	Sleep(1000);
   	system("cls");
    
	cout << "倒计时 " << i << " 秒" << endl;
	i--;
	Sleep(1000);
   	system("cls");
   	
   	cout << "倒计时 " << i << " 秒" << endl;
	i--;
	Sleep(1000);
   	system("cls");
   	
	cout << "时间到！" << endl;
	
  return 0;
}
