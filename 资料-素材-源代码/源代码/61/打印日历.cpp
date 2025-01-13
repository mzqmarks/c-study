#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	for(int i=1;i<=12;i++){
		cout << setw(13) << i << "ÔÂ" << endl;
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			for(int j=1;j<=31;j++){
				cout << setw(2) << j << " "; 
				if(j%10==0){
					cout << endl;
				}
			}
			cout << endl;
		}
		else if(i==2){
			for(int j=1;j<=28;j++){
				cout << setw(2) << j << " "; 
				if(j%10==0){
					cout << endl;
				}
			}
			cout << endl;
			cout << endl;	
		}
		else{
			for(int j=1;j<=30;j++){
				cout << setw(2) << j << " "; 
				if(j%10==0){
					cout << endl;
				}
			}
			cout << endl;
		}
	}
	return 0;
}

