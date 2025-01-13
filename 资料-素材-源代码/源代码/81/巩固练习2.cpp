#include <iostream>
using namespace std;
int main(){
	int num[] = {1,2,3,4,5,6,7,8,9};
	int *p = num;
	
	for(int i=8;i>0;i=i-2){
		cout << "*" << *(p+i);
	}	
	return 0;
}

