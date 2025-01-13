#include <iostream>
using namespace std;
 
int factorial(int num){
	int product=1;
	for(int i=1;i<=num;i++){
		product *= i;
	}	
	return product;
}

int summation(int num){
	int sum=0; 
	for(int i=1;i<=num;i++){
		sum += factorial(i);
	} 
	return sum;
} 
int main(){
	cout << summation(10);
	return 0;
}

