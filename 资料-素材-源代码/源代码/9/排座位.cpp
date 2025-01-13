#include <iostream>
using namespace std;

int main(){
	
	int seatNum1,seatNum2,empty;
	
	seatNum1 = 185;
	seatNum2 = 165;
	
	empty = seatNum1;
	seatNum1 = seatNum2;
	seatNum2 = empty;
	
	cout << "交换以后" << endl; 
	cout << "1号座位身高：" <<  seatNum1 << endl; 
	cout << "2号座位身高：" <<  seatNum2 << endl; 
	
	return 0;
}
