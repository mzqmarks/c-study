#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<6;i++){
		for(int j=5-i;j>0;j--){
			cout << ' ';
		}
		for(int k=0;k<2*i+1;k++){
			cout << '*';
		}
		cout << endl;
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout << " ";
		}
		for(int k=0;k<7;k++){
			cout << '*';
		}
		cout << endl;
	}
	
	return 0;
}

