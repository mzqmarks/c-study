#include <iostream>
using namespace std;
int main(){
	char *p1,*p2;
	char ch1[]="I Love";
	char chScratch[]="Scratch";
	char chPython[]="Python";
	char chC[]="C++";
	char ch;
	cout << "Scratch¡¢Python¡¢C++£¬Äã¸üÏ²»¶ÄÄÖÖ±à³ÌÓïÑÔ?(ÊäÈës,p,c)";
	cin >> ch;
	
	p1 = ch1;
	if(ch=='s'){
		p2 = chScratch;
	}
	else if(ch=='p'){
		p2 = chPython;
	}
	else if(ch=='c'){
		p2 = chC;
	}
	else{
		p2 = "Ñ¡Ôñ´íÎó£¡"; 
	}
	cout << p1 << " "; 
	cout << p2 << " "; 
	return 0;
}

