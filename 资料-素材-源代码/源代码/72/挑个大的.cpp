#include <iostream>
using namespace std;
int max(){
	int nums[10] = {68,86,96,69,88,78,87,99,65,95};
	int maxnum=0;
	for(int i=0;i<10;i++){
		if(maxnum<nums[i]){
			maxnum = nums[i];
		}
	}
	return maxnum;
}
int main(){
	int value = max();
	cout << value;
	return 0;
}

