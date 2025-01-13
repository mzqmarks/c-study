#include <iostream>
using namespace std;
int main(){
	int num[10]={0,1,2,3,4,5,6,7,8,9};
	int *p,sum=0;
	p = num;
	for(int i=0;i<10;i++){
		cout << *(p+i);
		sum += p[i];
	}
	cout << endl;
	cout << sum;  
	return 0; 
}

