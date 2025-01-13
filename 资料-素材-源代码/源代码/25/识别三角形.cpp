#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int sl1,sl2,sl3;
	cout << "请输入3条边长：" << endl;
	cin >> sl1 >> sl2 >> sl3;
	
	if(sl1 + sl2 > sl3 && sl2 + sl3 > sl1 && sl1 + sl3 > sl2){
		if(sl1==sl2 || sl2==sl3 || sl1==sl3){
			if(sl1==sl2 && sl2==sl3){
				cout << "这是一个等边三角形！"; 
			}
			else if((pow(sl1,2)+pow(sl2,2)==pow(sl3,2)) || (pow(sl2,2)+pow(sl3,2)==pow(sl1,2)) || (pow(sl1,2)+pow(sl3,2)==pow(sl2,2))){
				cout << "这是一个等腰直角三角形！"; 
			}
			else{
				cout << "这是一个等腰三角形！"; 
			}			
		}
		else if((pow(sl1,2)+pow(sl2,2)==pow(sl3,2)) || (pow(sl2,2)+pow(sl3,2)==pow(sl1,2)) || (pow(sl1,2)+pow(sl3,2)==pow(sl2,2))){
			cout << "这是一个直角三角形！"; 
		}
		else{
			cout << "这是一个三角形！"; 
		}
	}
	else{
		cout << "无法组成一个三角形。"; 
	}
	
	return 0;
}

