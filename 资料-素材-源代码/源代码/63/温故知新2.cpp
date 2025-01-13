#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,i,j,sum=0,average;
	cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	sum = a+b+c+d+e+f+g+h+i+j;
	average = sum/10;
	cout << "平均值为 " << average << endl;
	if(a<average) {
		cout << a << " ";
	}
	if(b<average) {
		cout << b << " ";
	}
	if(c<average) {
		cout << c << " ";
	}
	if(d<average) {
		cout << d << " ";
	}if(e<average) {
		cout << e << " ";
	}
	if(f<average) {
		cout << f << " ";
	}
	if(g<average) {
		cout << g << " ";
	}
	if(h<average) {
		cout << h << " ";
	}
	if(i<average) {
		cout << i << " ";
	}
	if(j<average) {
		cout << j << " ";
	}
	return 0;
}

