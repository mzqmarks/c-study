/* 
假设血压的判定标准为： 
1、低血压：收缩压低于90mmHg同时舒张压低于60mmHg。
2、正常血压：收缩压90-139mmHg，舒张压60-89mmHg。
3、高血压：收缩压高于等于140同时舒张压高于等于90mmHg。 
*/
#include <iostream>
using namespace std;

int main(){
	
	double systolicPressure,diastolicPressure;
	cout << "请输入收缩压："; 
	cin >> systolicPressure;
	cout << "请输入舒张压：";
	cin >> diastolicPressure;
	
	if(systolicPressure < 90 && diastolicPressure < 60){
		cout << "注意:血压偏低了！"; 
	}
	else if(systolicPressure >= 140 && diastolicPressure >= 90){
		cout << "注意:血压偏高了！"; 
	}
	else if(systolicPressure >= 90 && systolicPressure <= 139 && diastolicPressure >= 60 && diastolicPressure <= 89){
		cout << "血压正常！"; 
	}
	else{
		cout << "不在范围内，请重新测量或咨询医生。"; 
	}	
	
	return 0;	
} 


