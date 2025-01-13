#include <iostream>
using namespace std;
int main(){	
	int num;	
	while(true){			
		cout << "ÊäÈëÊı×Ö£º"; 
		cin >> num;	
		if(num%10==3 || num%10==7 || num%3==0 || num%7==0){
			cout << "¹ı" << endl;
		}
		else{
			cout << num << endl;
		}
	} 
	return 0;
}



