#include <iostream>
using namespace std;
int main(){
	
	char vote;
	int agree,disagree,abstention;
	agree = 0;
	disagree = 0;
	abstention = 0;
	cout << "开始投票：" << endl; 
	
	while(true){
	
		cin >> vote;
		if (vote == 'q'){
			break;
		}	
		vote == 'y' ? agree++ : (vote == 'n' ? disagree++ : abstention++);
	
	} 
	cout << "赞同票数：" << agree << " 不赞同票数：" <<  disagree << " 弃权票数：" <<  abstention;
	return 0;
} 


