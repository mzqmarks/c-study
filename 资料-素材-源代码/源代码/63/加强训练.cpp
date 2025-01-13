#include <iostream>
using namespace std;
int main(){
	int count[10]; 
	int sum = 0,average;
	
	for(int i=0;i<10;i++){
		cin >> count[i];  
		sum += count[i];  		
	}
	
	average = sum / 10;
	cout << "Æ½¾ùÖµ£º" << average;
	cout << endl;
	
	for(int i=0;i<10;i++){
		if(count[i] < average)
			cout << count[i] << " ";
	} 
	return 0;
}

