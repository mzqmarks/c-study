#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		for(int j=9-i;j>0;j--){
			cout << ' ';
		}
		for(int k=0;k<2*i+1;k++){
			cout << '*';
		}
		cout << endl;
	}
	
	for(int i=0;i<10;i++){
		for(int j=0;j<7;j++){
			cout << " ";
		}
		for(int k=0;k<5;k++){
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}

