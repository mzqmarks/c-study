#include <iostream>
using namespace std;

int main(){
	
	float score;
	cout << "输入得分："; 
	cin >> score;
	
	if(score > 100){
		cout << "输入有误超出总分了！"; 
	}
	if (score >= 90){
		cout << "优秀"; 
	}
	if (score >= 80){
		cout << "良好"; 
	}
	if (score >= 70){
		cout << "中等"; 
	}
	if (score >= 60){
		cout << "及格"; 
	}
	if (score < 60){
		cout << "不及格"; 
	}
	if (score < 0){
		cout << "输入有误低于0分了！"; 
	}
	
	return 0;
} 

