#include <iostream>
#include <windows.h>
using namespace std;
int main(){

	while(true){		
		Sleep(500);
		system("cls");
		
		for(int i=0;i<3;i++){
			for(int i=0;i<3;i++){
				cout << "£¿";
			}
			cout << endl;		
		}
		
		Sleep(500);
		system("cls");
		
		for(int i=0;i<3;i++){
			for(int i=0;i<3;i++){
				cout << "£¡";
			}
			cout << endl;
		}
	}
	return 0;
}
