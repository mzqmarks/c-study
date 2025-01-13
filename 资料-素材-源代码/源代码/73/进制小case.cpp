#include <iostream>
using namespace std;
void binary(int num){
	int length=0;
	int arr[100];
	while (num!=0){		
		int binaryNum = num % 2;
		num = num / 2;	
		arr[length]=binaryNum;
		length++;
	}
	for(int i=length-1;i>=0;i--){
		cout << arr[i];
	}
}

int main(){	
	int input;
	cin >> input;
	binary(input);
	return 0;
}

