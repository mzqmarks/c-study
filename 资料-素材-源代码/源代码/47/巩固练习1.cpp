#include <iostream>
using namespace std;
int main(){
	int x=1,y=1,z=0;
	z=x++||y++;
	cout << x << y << z;
	return 0;
}

