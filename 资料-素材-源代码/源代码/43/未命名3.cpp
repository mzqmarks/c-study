#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	for(int i = 1;i<=12;i++){
		cout << endl << setw(14) << i << "ÔÂ" << endl; 
		if(i==1){
			for(int i = 1;i<=31;i++){
				cout << setw(2) << i << " ";
				if(i%10==0){
					cout << endl;
				} 
			}
			cout << endl;
		}
		if(i==2){
			for(int i = 1;i<=28;i++){
				cout << setw(2) << i << " ";
				if(i%10==0){
					cout << endl;
				} 
			}
			cout << endl;
		}
	}
	return 0;
}
