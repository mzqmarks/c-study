#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	for(int i=0;i<60;i++){
		if(i<10){
			cout << 0;
		}
		cout << i%60;
		Sleep(1000);
		system("cls");
	}
	cout << "Ò»·ÖÖÓµ½£¡"; 
	return 0;
}

