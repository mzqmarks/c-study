#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	while(true){
		int num1 = rand()%10;
		int num2 = rand()%10;
		int num;
		int product = num1 * num2;
		cout << num1 << '*' << num2 << '=';
		cin >> num;
		if(num==product){
			cout << "太棒了！" << endl;
		}
		else{
			cout << "不对，加油！" << endl;
		}
	} 	 
	return 0;
}

