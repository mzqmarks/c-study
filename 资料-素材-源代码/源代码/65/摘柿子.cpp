#include <iostream>
using namespace std;
int main(){
	int persimmonHeight[10],count;
	int height=179 + 200;
	for(int i=0;i<10;i++){
		cin >> persimmonHeight[i];
	} 
	for(int i=0;i<10;i++){
		if(height>=persimmonHeight[i]){
			count++;
		}
	}
	cout << count;
	return 0;
}

