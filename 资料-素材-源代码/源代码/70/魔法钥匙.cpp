#include <iostream>
using namespace std;
int main(){
	char arr[5][5]={{'*','*','#','*','&'},
					{'*','%','#','&','*'},
					{'#','#','#','&','*'},
					{'*','%','#','&','*'},
					{'*','*','#','*','&'}};
	
	//×ª»»				
	for(int i=0;i<5;i++){
		for(int j=0;j<5/2;j++){
			char temp = arr[i][j];
			arr[i][j] = arr[i][4-j];
			arr[i][4-j] = temp;
		}
	} 
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}

