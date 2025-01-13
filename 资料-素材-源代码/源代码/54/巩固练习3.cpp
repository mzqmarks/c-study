#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,max=0;
	cin >> num;
	
	while(num!=0){
		if(num>max){
			max = num;
		}
		cin >> num;
	}
	cout << max;
     return 0;
}

