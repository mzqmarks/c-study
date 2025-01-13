#include <iostream>
using namespace std;

int main(){
	
	int num,i;
	i = 0;
	num = i++;
	cout << "num: " << num << endl;
	
	num = i + 2;
	cout << "num: " << num << endl;
	
	num = --i;
	cout << "num: " << num << endl;
	
	num = ++i;
	cout << "num: " << num << endl;
	
  return 0;
}

