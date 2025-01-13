#include <iostream>
using namespace std;
int main(){
	int arr[4][4] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}

