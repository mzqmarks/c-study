#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<=30;i++){
		for(int j=0;j<=30;j++){
			if(i+j==30 && 2*i+4*j==90){
				cout << i << " " << j; 
			}
		}
	}
	return 0;
}
