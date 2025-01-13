#include <iostream>
using namespace std;
int main(){
	int n,sum,num;
	cin >> n;
	do{
		cin >> num;
		sum += num;
		n--;
	} while(n>0);
	cout << sum;
	return 0;
}
