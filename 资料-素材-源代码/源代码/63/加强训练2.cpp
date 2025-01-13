#include <iostream>
using namespace std;
int main(){
	//{123,159,59,23,201,189,168,176,156,166}
	//123 159 59 23 201 189 168 176 156 166 
	int count[10]; 
	int sum = 0,average;
	
	for(int i=0;i<10;i++){
		cin >> count[i];
	}
	
	for(int i=0;i<10;i++){
		cout << count[i] << " ";
		sum += count[i];
	} 
	
	cout << endl;
	average = sum / 10;
	cout << "Æ½¾ùÖµ£º" << average;
	cout << endl;
	
	for(int i=0;i<10;i++){
		if(count[i] < average)
			cout << count[i] << " ";
	} 
	return 0;
}

