#include <iostream>
using namespace std;

int main(){
	
	float score1,score2;
	cout << "请输入两次考试成绩："; 
	cin >>  score1 >> score2;
	
	if(score1>=60 || score2>=60) {
		cout << "恭喜考试通过！";
	}
	else {
		cout << "考试不通过，继续加油！"; 
	}
	return 0;
}

