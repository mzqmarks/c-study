#include <iostream>
#include <string>
using namespace std;
int main() {
    char ch[100];
    int length; 
    cin >> length;
    for(int i=0;i<length;i++){
    	cin >> ch[i];
	}	
	//µ¹Ðò
	for(int i=length-1;i>=0;i--){
		cout << ch[i];
	}
    return 0;
}

