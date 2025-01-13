#include <iostream>
using namespace std;
int main(){
	int count = 0;
	for(int x=0;x<=10;x++){
		for(int y=0;y<10;y++){
			for(int z=1;z<10;z++){
				count++;
			}
		}
	}
	cout << count;
	return 0;
}

