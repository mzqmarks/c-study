#include <iostream>
using namespace std;

void order(int arr[],int length){
	//√∞≈›≈≈–Ú 
	for(int i=0;i<length-1;i++){
		for(int j=0;j<length-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp; 
			}
		}
	}
	cout << "≈≈–Ú∫Û£∫"; 
	for(int i=0;i<length;i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[15]={23,45,12,24,67,16,8,98,54,43,46,45,109,68,86};
	order(arr,15);
	return 0;
}

