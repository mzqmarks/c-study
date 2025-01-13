#include <iostream>
#include<Windows.h>
using namespace std;
int main(){
    
    //设置控制台窗口的标题为“SOS摩斯密码”
    system("title SOS摩斯密码");  
    
    //调用系统蜂鸣器，第一个参数控制频率，第二个参数控制时长
	Beep(1000,200);  
	Sleep(600); 
	Beep(1000,200);
	Sleep(600); 
	Beep(1000,200);
	Sleep(600); 
	
	Beep(1000,600);
	Sleep(600); 
	Beep(1000,600);
	Sleep(600); 
	Beep(1000,600);
	Sleep(600); 
	
	Beep(1000,200);
	Sleep(600); 
	Beep(1000,200); 
	Sleep(600); 
	Beep(1000,200);
	Sleep(600); 

	return 0;
}

