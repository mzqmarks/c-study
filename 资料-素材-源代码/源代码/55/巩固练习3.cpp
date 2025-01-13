#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	for(int n=0;n<=9;n++){
		for(int i=0;i<3;i++){
			for(int i=0;i<3;i++){
				cout << n << " ";
			}
			cout << endl;		
		}
		Sleep(500);
		system("cls");
	}
	return 0;
}

