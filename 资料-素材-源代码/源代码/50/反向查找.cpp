#include <iostream>
using namespace std;
int main(){
	int a=1,b=1,num;
	cout << "查找是第几项：";
	cin >> num;
	if(num==0){
		cout << "第一项";
	}
	else if(num==1)
		cout << "第二项或第三项"; 
	else{
		int i=3,temp; 
		while(true){
			temp = a + b;
			if(temp==num){
				cout << i; 
				break; 
			}
			a = b;
			b = temp;
			i++;	 
		} 
	}
	 
	return 0;
}

