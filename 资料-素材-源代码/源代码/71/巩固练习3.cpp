#include <iostream>
using namespace std;
void shuchu(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			cout << "*";
		}
		cout << endl; 
	}
} 
int main(){
	shuchu(); 
	return 0;
}

