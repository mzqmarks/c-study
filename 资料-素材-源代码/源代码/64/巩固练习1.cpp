#include <iostream>
using namespace std;
int main(){
	int myArray[6]={1,2,3,4,5,6};
	cout << sizeof(myArray)/sizeof(myArray[0]) << endl;
	//for (int i = 0; i < myArray.length(); i++) { cout << myArray[i] << " "; }
	//for (int i = 1; i <= sizeof(myArray); i++) { cout << myArray[i] << " "; }
	for (int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++) { cout << myArray[i] << " "; }
	//for (int i = 1; i < myArray.length(); i++) { cout << myArray[i] << " "; }
	return 0;
}

