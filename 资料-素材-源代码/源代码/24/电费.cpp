#include <iostream>
using namespace std;
int main(){
	
	double e1,e2,e3,e,total1,total2;
	cout << "请输入14:00-17:00、19:00-22:00时段的用电量：";
	cin >> e1;
	cout << "请输入8:00-14:00、17:00-19:00、22:00-24:00时段的用电量：";
	cin >> e2;
	cout << "请输入0:00-8:00时段的用电量：";
	cin >> e3;
	
	e = e1 + e2 + e3;
	total2 = e1 * 0.9857 + e2 * 0.6021 + e3 * 0.3070;
	
	if(e==0){
		total1 = 0;
	}
	else if(e<201){
		total1 = 0.4983 * e;	
	}
	else if(e>=201 && e<401){
		total1 = 200 * 0.4983 + (e - 200) * 0.5483;
	}
	else{
		total1 = 200 * 0.4983 + 200 * 0.5483 + (e - 400) * 0.7983;
	}
	
	if(total1 < total2){
		cout << "第一套方案收费：" << total1 << "。第二套方案收费：" << total2 << "。第一套方案更实惠！";
	}
	else if(total1 > total2){
		cout << "第一套方案收费：" << total1 << "。第二套方案收费：" << total2 << "。第二套方案更实惠！";
	}
	else{
		cout << "第一套方案收费：" << total1 << "。第二套方案收费：" << total2 << "。第一二套方案收费一样！";
	} 
	return 0;
}

