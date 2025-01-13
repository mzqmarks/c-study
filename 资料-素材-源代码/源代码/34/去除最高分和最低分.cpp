#include <iostream>
using namespace std;
int main() {
	float score,min=100,max=0,sum = 0;
	int num = 0;
	while(num < 8){
		cout << "请输入得分：";
		cin >> score;
		if(score >= 0 && score <= 100){
			sum = sum + score;
			num++; 
			if(score > max){
				max = score;
			}
			if(score < min){
				min = score;
			}
		}
		else{
			cout << "分数在0~100之间，请重新输入" << endl; 
		}
	}
	cout << "最终计算平均分是：" << (sum-max-min)/(num-2);
    return 0;
}

