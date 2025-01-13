#include <iostream>
using namespace std;
int main(){
	float temp;
	float arr[10];
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	//ц╟ещеепР 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp; 
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

