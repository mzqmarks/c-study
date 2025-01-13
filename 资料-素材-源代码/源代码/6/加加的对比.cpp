#include <iostream>
using namespace std;

int main(){
	
	int i,j,n,m;	

	i = 0;
	n = i++;
	cout << "i:" << i << endl;
	cout << "n:" << n << endl;
	
	j = 0;
	m = ++j;
	cout << "j:" << j << endl;
	cout << "m:" << m << endl;
    
  return 0;
}

