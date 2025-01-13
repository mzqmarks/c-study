#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<=30;i++){
		int j = 30 - i;
		if(2*i+4*j==90){
			cout << i << " " << j; 
		}
	}
	return 0;
}

