#include <iostream>
using namespace std;
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int *p = arr;
	cout << p+1 << p[2]; 
	return 0; 
}

