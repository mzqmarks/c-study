#include <iostream>
using namespace std;
int main(){
	int sum=1;
	for(int i=1;i<=64;i++){
		cout << i << "  " << sum << endl;
		sum *= 2;	
	}
	return 0;
}

