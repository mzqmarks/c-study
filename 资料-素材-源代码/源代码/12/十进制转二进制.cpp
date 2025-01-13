#include <iostream>
using namespace std;

int main(){
	
	int num,binary;
	cin >> num;
	
	while (true){
		
		binary = num % 2;
		num = num / 2;	
		cout << binary << "  ÉÌÎª£º" << num << endl;
		system("pause");
	
	}
	
	return 0;
}
