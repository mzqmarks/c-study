#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		srand(time(NULL));
		int num = rand()%10 + 1;
		cout << num; 
	}	 
	return 0;
}

