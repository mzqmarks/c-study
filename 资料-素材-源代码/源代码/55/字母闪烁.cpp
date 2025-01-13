#include <iostream>
#include <windows.h>
using namespace std;
int main(){

	for(char ch='A';ch<='Z';ch++){
		for(int i=0;i<3;i++){
			for(int i=0;i<3;i++){
				cout << ch << " ";
			}
			cout << endl;		
		}
		Sleep(500);
		system("cls");
	}
	return 0;
}

