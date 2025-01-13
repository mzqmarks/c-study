#include <iostream>
#include <windows.h> // 用于 Sleep 函数
#include <iomanip> // 用于 setw 函数
using namespace std;
int main() {
	int i = 3;
    while(true){    	
    	cout << setw(i) << "***" << endl;
    	cout << setw(i) << "*  " << endl;
    	cout << setw(i) << "***" << endl;   	
    	Sleep(500);
    	// 清空终端（在Windows上使用cls，Linux上使用clear）
        system("cls");
        cout << setw(i) << "** " << endl;
    	cout << setw(i) << "* *" << endl;
    	cout << setw(i) << "** " << endl;   	
    	Sleep(500);
    	// 清空终端（在Windows上使用cls，Linux上使用clear）
        system("cls");
		i++;
	}
    return 0;
}

