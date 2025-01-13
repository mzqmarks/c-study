#include <iostream>
using namespace std;
int main(){
	for(int x = 0;x<=1;x++){
		for(int y = 0;y<=1;y++){
			for(int n = 0;n<=1;n++){
				for(int m = 0;m<=1;m++){
					if((x + y + n + m > 0) + (x + y + n + m == 0) + (y + m <= 1) + (m == 0)  == 2){
						cout << x << " " << y << " " << n << " " << m << endl;
						if((x + y + n + m > 0) == 1){
							cout << "甲说的是真话。" << endl;
						} 
						if((x + y + n + m == 0) == 1){
							cout << "乙说的是真话。" << endl; 
						}	 
						if((y + m <= 1) == 1){
							cout << "丙说的是真话。" << endl; 
						}
						if((m == 0) == 1){
							cout << "丁说的是真话。" << endl; 
						}
					}
				}
			}
		}			
	} 
	return 0;
}

