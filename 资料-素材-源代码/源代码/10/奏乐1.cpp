#include <iostream>
#include<Windows.h>
using namespace std;
int main(){  
     
	//±ÍÃ‚£∫do re mi fa sol la si
    system("title do re mi fa sol la si");  
	Beep(523,200);  //do“Ù 
	Sleep(500); 
	Beep(578,200);  //re“Ù 
	Sleep(500); 
	Beep(659,200);  //mi“Ù
	Sleep(500); 
	Beep(698,200);  //fa“Ù
	Sleep(500); 
	Beep(784,200);  //sol“Ù
	Sleep(500); 
	Beep(880,200);  //la“Ù
	Sleep(500); 
	Beep(988,200);  //si“Ù
	return 0;
}

