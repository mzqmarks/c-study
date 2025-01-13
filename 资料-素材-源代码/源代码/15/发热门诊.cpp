#include <iostream>
using namespace std;

int main(){
	
	float temperature;
	cout << "请输入体温：";
	cin >> temperature;
	
	if (temperature > 37.3){
		cout << "体温高于37.3℃，请前往发热门诊。";
	} 
	
	return 0;
}

