#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int num[10]={1,1,1,1,1,1,1,1,1,1};
	for(int i=0;i<10;i++){
		for(int j=0;j<i;j++){
			num[i]=num[i]+num[j];
		}
	}
	
	for(int i=0;i<5;i++){
		sum += num[i];
	}
	cout << sum;
	return 0;
}

