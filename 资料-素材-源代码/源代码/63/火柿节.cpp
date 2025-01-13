#include <iostream>
using namespace std;
int main(){
	//256 189 364 439 365 517 349 428 193 623 
	float height[10];
	int count=0;
	int h = 165 + 200;
	for(int i=0;i<10;i++){
		cin >> height[i];
	} 
	for(int i=0;i<10;i++){
		if(height[i] <= h){
			cout << height[i] << " ";
			count++;
		}
	}
	cout << endl;
	cout << count;
	return 0;
}
