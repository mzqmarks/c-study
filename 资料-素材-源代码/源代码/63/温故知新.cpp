#include <iostream>
using namespace std;
int main(){
	int num,sum=0,average;
	for(int i=0;i<10;i++){
		cin >> num;
		sum += num;
	}
	average = sum/10;
	cout << "平均值为 " << average << endl; 
	cout << num; 
	return 0;
}

