#include <iostream>
using namespace std;
int main(){
	int num = 0;
	int sum = 0;
	while(num<=100){
		num += 2; 
		sum = sum + num;		
	} 
	cout << sum;
	return 0;
}

