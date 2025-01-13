#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	for(int i = 0;i<60;i++){
		system("cls");
		if(i<10){
			cout << 0;
		}
		cout << i%60 << endl;	
		Sleep(1000);
	}
	cout << "Ò»·ÖÖÓµ½£¡"; 
	return 0;
}
