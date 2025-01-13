#include <iostream>
using namespace std;
int main(){
	int *p;
	int num1[6]={1,3,5,7,9,11};
	int num2[10]={9,8,7,6,5,4,3,2,1,0};
	
	p = num1;
	//加了*表示里面的内容 ，p+1是地址往后一个，*p + 1是值加一
	cout << p << " " << *(p+1) << " " << *p+1 << endl;
	
	p = &num2[3];
	
	for(int i=0;i<6;i++){
		cout << *(p+i) << " ";
	}
	cout << endl;
	for(int i=0;i<6;i++){
		cout << *p+i << " ";
	}	
	return 0; 
}

