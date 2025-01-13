#include <iostream>
using namespace std;
int main(){
	int score;
	char grade;

	while(true){
		cout<<"请输入考试得分:";
		cin>>score;
		
		if(score>=0 && score<=100){
			score = score/10; 
			switch(score){ 
				case 10:
				case 9:
					grade='A';
					break;
				case 8:
					grade='B';
					break;
				case 7:
					grade='C';
					break;
				case 6:
					grade='D';
					break;
				case 5:
				case 4:
				case 3:
				case 2:
				case 1:
				case 0:
					grade='E';
					break;
			}
			cout << "等级是:" << grade << endl;
		}
		else{
			cout << "输入有误！";
		}
		
	}
	return 0;			
}

