#include <iostream>
using namespace std;
int main(){
	bool answer = false; 
	int n,m;
	cin >> n >> m; 
	for(int i=0;i<=n;i++){
		int j = n - i;
		if(2*i+4*j==m){
			cout << i << " " << j; 
			answer = true;
		}
	}
	if(!answer){
		cout << "нч╫Б";
	}
	return 0;
}

