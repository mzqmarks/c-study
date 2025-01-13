#include <iostream>
#include <string> 
using namespace std;
int main(){
	int num = 0;
	int numCopy;
	int discuss;
	string password = "002023";
	string guess = "";
	while(num <= 999999){
		numCopy = num;
		discuss = 100000;
		while(discuss != 0){
			switch(numCopy/discuss){
				case 0:
					guess += "0";
					break;
				case 1:
					guess += "1";
					break;
				case 2:
					guess += "2";
					break;
				case 3:
					guess += "3";
					break;
				case 4:
					guess += "4";
					break;
				case 5:
					guess += "5";
					break;
				case 6:
					guess += "6";
					break;
				case 7:
					guess += "7";
					break;
				case 8:
					guess += "8";
					break;
				case 9:
					guess += "9";
					break;
			}
			numCopy = numCopy % discuss;
			discuss /= 10;
		}		
		if(guess == password){
			break;
		}
		else{
			guess = "";
			num++;
		}		
	}	
	cout << "终于破解了，密码是：" << guess;	
	return 0;
}

