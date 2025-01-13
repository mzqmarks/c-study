#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int year,day=28;
	cout << "输入年份：";
	cin >> year;
	
	if(year % 4 == 0 && year % 100 != 0){
		day = 29; 
	} 
	else if(year % 400 == 0){
		day = 29; 
	}
	
	for(int i=1;i<=12;i++){
		cout << setw(13) << i << "月" << endl;
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
			for(int j=1;j<=day;j++){
				cout << setw(2) << j << " "; 
				if(j%10==0){
					cout << endl;
				}
			}
			cout << endl;	
		}
		else{
			for(int j=1;j<=30;j++){
				cout << setw(2) << j << " "; 
				if(j%10==0){
					cout << endl;
				}
			}
		}
	}
	return 0;
}

