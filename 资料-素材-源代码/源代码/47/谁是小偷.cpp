#include <iostream>
using namespace std;
int main(){
	int lie; 
	for(int x=1;x<=4;x++){
		if((x==3) + (x!=2) + (x!=3) + ((x!=2&&x==4)||(x==2&&x!=4)) == 3){
			lie = x;
			switch (lie){
				case 1:
					cout << "甲是窃贼。" << endl;
					break; 
				case 2:
					cout << "乙是窃贼。" << endl;
					break;
				case 3:
					cout << "丙是窃贼。" << endl;
					break; 
				case 4:
					cout << "丁是窃贼。" << endl;
					break; 		
			}
		}		 
	} 
	
	if(!(lie==3)){
		cout << "甲说的是假话。" << endl;
	} 
	else if(!(lie!=2)){
		cout << "乙说的是假话。" << endl; 
	}	 
	else if(!(lie!=3)){
		cout << "丙说的是假话。" << endl; 
	}
	else if(!(lie!=2&&lie==4)||(lie==2&&lie!=4)){
		cout << "丁说的是假话。" << endl; 
	}
	return 0;
}

