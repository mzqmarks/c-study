#include <iostream>
#include<Windows.h>
using namespace std;
int main(){
    
    /* 
	标题：蜂鸣声 
    Windows系统发出蜂鸣声
	*/ 
    system("title 蜂鸣声");  
	Beep(1000,200);  
 
	return 0;
}

