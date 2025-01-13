#include <iostream>
using namespace std;

int main(){
	
	int num,binary;
	cin >> num;
	
	while (num>0){
		
		binary = num % 2;
		num = num / 2;	
		cout << binary << "  ÉÌÎª£º" << num << endl;
	
	}
	
	return 0;
}
