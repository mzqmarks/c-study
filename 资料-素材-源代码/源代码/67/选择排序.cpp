#include <iostream>
using namespace std;
int main(){
	int arr[15]={23,45,12,24,67,16,8,98,54,43,46,45,109,68,86};
	int n = sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<n-1;i++){
		int min = arr[i];
		int minIndex = i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]<min){
				min = arr[j];
				minIndex = j;
			}
		}
		if(i!=minIndex){
			arr[minIndex] = arr[i];
			arr[i] = min;
		}
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

