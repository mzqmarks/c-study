#include <iostream>
using namespace std;
int main(){
	int count = 0;
	for(int x=0;x<=100/5;x++){
		for(int y=0;y<=100/3;y++){
			count++;
			int z = 100 - x - y; 
			if(x+y+z==100 && 5*x+3*y+z/3==100 && z%3==0){
				cout << x << ' ' << y << ' ' << z << endl;
			}
		}
	}
	cout << count;
	return 0;
}

