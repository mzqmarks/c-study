#include <iostream>
using namespace std;
 
int factorial(int num){
	int product=1;
	for(int i=1;i<=num;i++){
		product *= i;
	}	
	return product;
}

int main(){
	int sum = 0;
	for(int i=1;i<=10;i++){
		sum += factorial(i);
	} 
	cout << sum;
	return 0;
}

