#include <iostream>
using namespace std;
int main(){
	int temp;
	int arr[15]={23,45,12,24,67,16,8,98,54,43,46,45,109,68,86};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "ÅÅÐòÇ°£º"; 
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	//Ã°ÅÝÅÅÐò 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp; 
			}
		}
	}
	
	cout << "ÅÅÐòºó£º"; 
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

