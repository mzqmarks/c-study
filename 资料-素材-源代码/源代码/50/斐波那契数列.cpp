#include <iostream>
using namespace std;
int main(){
	int a=0,b=1,num;
	cout << "查找斐波拉契数列的第几项：";
	cin >> num;
	if(num==1){
		cout << a;
	}
	else if(num==2){
		cout << b;
	}
	else{
		int temp =num;
		for(int i=3;i<=num;i++){
			temp = a + b;
			a = b;
			b = temp;
		} 
		cout << temp; 
	}
	 
	return 0;
}
