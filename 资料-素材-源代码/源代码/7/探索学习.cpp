#include<iostream>
#include <windows.h>
using namespace std;
int main(){
	
	int sum,i,j;
	sum = 0;
	i = 1;
	j = 1;
	
	
	while (true){
		sum = sum + i;
		cout << j << "层星号总数量是：" << sum << endl; 
    	i = i + 2;
    	j++;
    	Sleep(1000);
	}	
	
  return 0;
}
