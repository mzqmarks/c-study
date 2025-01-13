#include <iostream>
using namespace std;
void swapAddress(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swap(int x,int y){
	int temp = x;
	x = y;
	y = temp;
}
int main(){
	int num1=2023,num2=2022;
	swap(num1,num2); 
	cout << num1 << " " << num2 << endl; 
	swapAddress(&num1,&num2);
	cout << num1 << " " << num2;
	return 0;
}

