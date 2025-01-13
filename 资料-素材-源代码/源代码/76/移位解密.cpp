#include <iostream>
using namespace std;

string jiemi(string str,int pass){
	pass = pass%26;
    for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			continue; 
		}
		else if(str[i]-pass<'a'){
			str[i] = 'z'-(pass-(str[i]-'a'))+1;
		}
		else{
			str[i]=str[i]-pass;
		}
	}
	return str;
}
 
int main(){
	string str;
	getline(cin,str);  //确保空格可以输入 
	cout << jiemi(str,6);
	return 0;
}

