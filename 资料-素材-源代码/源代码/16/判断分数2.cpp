#include <iostream>
using namespace std;

int main(){
	
	float score;
	string level; 
	cout << "输入得分："; 
	cin >> score;
	
	if(score > 100){
		level = "输入有误超出总分了！"; 
	}
	if (score >= 90){
		level = "优秀"; 
	}
	if (score >= 80){
		level = "良好"; 
	}
	if (score >= 70){
		level = "中等"; 
	}
	if (score >= 60){
		level = "及格"; 
	}
	if (score < 60){
		level = "不及格"; 
	}
	if (score < 0){
		level = "输入有误低于0分了！"; 
	}
	cout << level;
	
	return 0; 
} 

