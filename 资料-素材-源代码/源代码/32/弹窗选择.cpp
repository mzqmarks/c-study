#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	if(MessageBox(NULL,"是否连续弹窗？","提示",MB_YESNO) == IDYES){
		while(true){
			MessageBox(NULL,"连续弹窗启动！","弹窗病毒",MB_OK);
		} 
	}
	else{
		cout << "弹窗取消了。"; 
	} 
	return 0; 
}

