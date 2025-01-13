#include <iostream>
using namespace std;
int main(){
	
	float discount; 
	int total;
	cout << "ÇëÊäÈë¹ºÎï½ð¶î£º";
	cin >> total; 
	switch(total/1000){
		case 0:
			discount = 1.0;
			break;
		case 1:
			discount = 0.95;
			break;
		case 2:
			discount = 0.9;
			break;
		case 3:
		case 4:
			discount = 0.85;
			break;
		default:
			discount = 0.8;
			break; 		
	}
	
	cout << total - (total*discount);
	return 0;
}
