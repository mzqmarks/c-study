#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	for(int i=1;i<=6;i++){		
		Sleep(500);
		system("cls");
		
		cout << "£¿£¿£¿" << endl;
		cout << "£¿£¿£¿" << endl;
		cout << "£¿£¿£¿" << endl;
	
		Sleep(500);
		system("cls");
		
		int num = rand()%6 + 1;
		cout << "£¿£¿£¿" << endl;
		cout << "£¿" << num << " £¿" << endl;
		cout << "£¿£¿£¿" << endl;
	}	 
	return 0;
}

