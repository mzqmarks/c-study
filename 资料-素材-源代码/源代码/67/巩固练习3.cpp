#include <iostream>
using namespace std;
int main(){
	int arr[10];
	int n = 10; 
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n-1;i++){
		int max = arr[i];
		int maxIndex = i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]>max){
				max = arr[j];
				maxIndex = j;
			}
		}
		if(i!=maxIndex){
			arr[maxIndex] = arr[i];
			arr[i] = max;
		}
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

