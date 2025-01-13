#include <iostream>
using namespace std;

int main(){
	
	int factorial,i;
	
	factorial = 1;
	i = 10;
	
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	i--;
	factorial *= i;
	
	cout << "10! = " << factorial <<endl;
		
	return 0; 	 
}

