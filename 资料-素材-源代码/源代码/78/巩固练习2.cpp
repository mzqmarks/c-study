#include <iostream>
using namespace std;
 
void exchange(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int division(int a,int b){
	exchange(a,b); 
	return a/b;
} 
int main(){
	int a,b;
	cin >> a >> b; 
	cout << division(a,b);
	return 0;
}

