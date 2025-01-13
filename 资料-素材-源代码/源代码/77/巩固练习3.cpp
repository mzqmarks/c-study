#include <iostream>
using namespace std;

void digit(int arr[],int length){
	int maxIndex=0,count=0;
	for(int i=0;i<length;i++){
		if(arr[i]>arr[maxIndex]) {
			maxIndex = i;
		}
	}
	cout << arr[maxIndex] << endl;
	int num = arr[maxIndex] ;
	while(num!=0){
		num /= 10;
		count++;
	}
	cout << count;
}
int main(){
	int length,max;
	cin >> length;
	int arr[length];
	
	for(int i=0;i<length;i++){
		cin >> arr[i];
	}
	
	digit(arr,length);
	return 0;
}
