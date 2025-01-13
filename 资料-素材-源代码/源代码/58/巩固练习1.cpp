#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=10;i++){
		for(int j=2; j<i;j++){
			if(i%j==0){
				break;
		 	}
		 	//cout << j << " "; 
		}
		cout << i << ""; 
	}
	return 0;
}

