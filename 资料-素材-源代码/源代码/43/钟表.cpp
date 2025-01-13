#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int i = 0;
	do{
		system("cls");
		if(i>=3600){
			if(i/3600<10){
				cout << 0;
			}
			cout << i/3600 << ":";
		} 
		else{
			cout << "00:";
		}
		if(i>=60){
			if(i/60<10){
				cout << 0;
			}
			cout << i/60%60 << ":";
		} 
		else{
			cout << "00:";
		}
		if(i<10){
			cout << 0;
		}		
		cout << i%60%60;
		Sleep(1000);
		i++;
	}while(true);
	return 0;
}
