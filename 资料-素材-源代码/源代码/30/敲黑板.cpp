#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	
	int num;
	cout << "ÊäÈëÊý×Ö£º"; 
	cin >> num;
	
	while(true){
		cout << num << endl;
		num++;
		Sleep(500);
	}

	
	return 0;
}
