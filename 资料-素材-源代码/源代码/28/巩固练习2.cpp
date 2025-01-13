//9¡¢13¡¢17 
#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	switch(num%3){
		case 0:
			num++;
			break;
		case 1:
			++num;
			break;
		case 2:
			num = num + num;	
			break;	
	}
	cout << num;
	return 0;
}

