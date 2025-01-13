#include <iostream>
using namespace std;
 
int square(int num){
	int product=1;
	for(int i=1;i<=num;i++){
		product = i*i;
	}	
	return product;
}

int summation(int num){
	int sum=0; 
	for(int i=1;i<=num;i++){
		sum += square(i);
	} 
	return sum;
} 
int main(){
	int num;
	cin >> num; 
	cout << summation(num);
	return 0;
}

