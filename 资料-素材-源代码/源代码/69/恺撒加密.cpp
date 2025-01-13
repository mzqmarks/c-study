#include <iostream>
using namespace std;
int main(){
	string str;
	int num = 13;
	num = num%26;
	//getline(cin,str);
	
	char ch;
	cin >> ch;
	
	char chnew;
	cout << chnew; 
	
	if(ch+num>'z'){
		cout << ch+num;
		chnew = 'a' + (ch+num-'z'-1);
		cout << chnew;
	}
	
	/*
	for(int i=0;i<str.length();i++){
		char ch = str[i];
		if(ch<'z'-5){
			
		} 
	}
	*/ 
	return 0;
}
