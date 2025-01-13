#include <iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p = arr;
	cout << *p+9 << endl;
	cout << *(p+8) << endl;
	//cout << *p+=9 << endl;
	cout << *(p+9) << endl;
	return 0; 
}

