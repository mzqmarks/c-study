#include <iostream>
using namespace std;
int main(){
	int temp;
	int arr[10]={9,4,5,8,2,4,10,5,6,9};
	//ц╟ещеепР 
	for(int i=0;i<9;i++){
		for(int j=0;j<8-i;j++){
			if(arr[j]<arr[j+1]){
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp; 
			}
		}
	}
	
	for(int i=0;i<10;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

