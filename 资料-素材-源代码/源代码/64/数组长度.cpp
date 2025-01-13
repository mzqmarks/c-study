#include <iostream>
using namespace std;
int main(){
	char arr[]={'a','b','c','d','d','d','d','d','d','d','d','d'};
	cout << sizeof(arr)/ sizeof(arr[0]); 
	return 0;
}

