#include <iostream>
using namespace std;
int main(){
	int num;
	float sumMath=0,sumChinese=0,sumEnglish=0;
	cin >> num; 
	int arr[num][3];
	for(int i=0;i<num;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<num;j++){
			if(i==0){
				sumMath += arr[j][i];
			}
			else if(i==1){
				sumChinese += arr[j][i];
			}
			else{
				sumEnglish += arr[j][i];
			}
		}
	}
	
	cout << sumMath/num << " " << sumChinese/num << " " << sumEnglish/num;
	return 0;
}

