#include <iostream>
using namespace std;

int main() {
	
    char ch;
   
	while(true){
		
		cout << "请输入一个字符: ";
        cin >> ch;
		if (ch >= 'A' && ch <= 'Z') {
        	cout << ch << " 是大写字母" << endl;
  		} 
		else if (ch >= 'a' && ch <= 'z') {
     		cout << ch << " 是小写字母" << endl;
    	} 
    	else if (ch >= '0' && ch <= '9'){
    	 	cout << ch << " 是数字" << endl;
		}
    	else if(ch=='#'){
    		cout << "结束"; 
    	 	break;
		}
		else {
        	cout << ch << " 不是字母" << endl;
    	}
				
	} 
    return 0;
}

