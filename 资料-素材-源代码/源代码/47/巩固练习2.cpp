#include <iostream>
using namespace std;
int main(){
	int i;
	cin >> i;
	if(i++ > 5){
		cout << i;
	}
	else{
		cout << i--;
	}
	return 0;
}

