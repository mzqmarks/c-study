#include <iostream>
using namespace std;

int main(){
	int n,x,s=0;
	cin >> n;
	
	while(n){
		x = n % 10;
		if(x % 2 == 0){
			s += x;
		}
		n = n / 10;
	}
	cout << s << endl;
	return 0;
}
 
