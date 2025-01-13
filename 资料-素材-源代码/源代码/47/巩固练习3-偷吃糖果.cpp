#include <iostream>
using namespace std;
int main(){
	int lie; 
	for(int x=1;x<=4;x++){
		if((x==1||x==2||x==3||x==4) + (x!=1&&x!=2&&x!=3&&x!=4) + (x!=2||x!=4) + (x!=4) == 2){
			lie = x;
			switch (lie){
				case 1:
					cout << "甲偷吃了糖。" << endl;
					break; 
				case 2:
					cout << "乙偷吃了糖。" << endl;
					break;
				case 3:
					cout << "丙偷吃了糖。" << endl;
					break; 
				case 4:
					cout << "丁偷吃了糖。" << endl;
					break; 		
			}
		}		 
	} 
	
	if(lie==1||lie==2||lie==3||lie==4){
		cout << "甲说的是真话。" << endl;
	} 
	if(lie!=1&&lie!=2&&lie!=3&&lie!=4){
		cout << "乙说的是真话。" << endl; 
	}	 
	if(lie!=2||lie!=4){
		cout << "丙说的是真话。" << endl; 
	}
	if(lie!=4){
		cout << "丁说的是真话。" << endl; 
	}
	return 0;
}

