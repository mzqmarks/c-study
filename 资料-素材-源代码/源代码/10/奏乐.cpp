#include <iostream>
#include<Windows.h>
using namespace std;
int main(){
    
     
	//±ÍÃ‚£∫do re mi fa sol la si do1 

    system("title do re mi fa sol la si do1");  
    cout << "do" << endl; 
	Beep(523,200); 
	Sleep(500);
	cout << "re" << endl; 
	Beep(578,200); 
	Sleep(500);
	cout << "mi" << endl; 
	Beep(659,200); 
	Sleep(500);
	cout << "fa" << endl; 
	Beep(698,200);
	Sleep(500);
	cout << "sol" << endl; 
	Beep(784,200); 
	Sleep(500);
	cout << "la" << endl; 
	Beep(880,200); 
	Sleep(500);
	cout << "si" << endl; 
	Beep(988,200); 
	Sleep(500);
	cout << "do1" << endl; 
	Beep(1046,200);  
 
	return 0;
}
