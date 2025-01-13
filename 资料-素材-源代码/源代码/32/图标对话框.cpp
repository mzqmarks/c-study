#include <windows.h>
using namespace std;
int main(){
	//警告图标 
	MessageBox(NULL,"请确认图标！","图标对话框",MB_OK|MB_ICONEXCLAMATION);
	//错误图标 
	MessageBox(NULL,"请确认图标！","图标对话框",MB_OK|MB_ICONHAND);
	//问号图标 
	MessageBox(NULL,"请确认图标！","图标对话框",MB_OK|MB_ICONQUESTION);
	//提示图标 
	MessageBox(NULL,"请确认图标！","图标对话框",MB_OK|MB_ICONASTERISK);
	return 0; 
}

