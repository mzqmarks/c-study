#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	while(true){	
		for(int i=0;i<3;i++){
			for(int i=0;i<6;i++){
				cout << "!"; 
			}	
			cout << endl;
		}
		Sleep(500);
		system("cls");
		Sleep(500);	
	}
	return 0;
}

