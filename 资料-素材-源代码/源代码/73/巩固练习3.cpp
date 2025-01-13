#include <iostream>
using namespace std;

int adds(int count){
	int sum=0;
	for(int i=1;i<=count;i++){
		sum += i;
	}
	return sum;
}

int main(){	
	int input;
	cin >> input;
	cout << adds(input);
	return 0;
}

