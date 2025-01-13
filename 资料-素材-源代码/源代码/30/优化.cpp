#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	
	int num;
	cout << "输入起始数字："; 
	cin >> num;
	
	while(true){			
		if(num%10==3 || num%10==7 || num%3==0 || num%7==0){
			cout << num << "→过" << endl;
		}
		else{
			cout << num << "→" << num << endl;
		}
		num++; 
		Sleep(500);
	} 
	return 0;
}



