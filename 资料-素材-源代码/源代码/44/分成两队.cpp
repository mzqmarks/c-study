#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	for(int i = 1;i<=18;i++){
		if(i % 2 != 0){
			cout << setw(2) << i << " "; 
		}
		else{
			cout << setw(2) << i << endl;
		}
	}
	return 0;
}

