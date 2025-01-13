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
			if(score==10){
				grade='A';
			}	
			else if(score==9){
				grade='A';
			} 
			else if(score==8){
				grade='B';
			} 
			else if(score==7){
				grade='C';
			} 
			else if(score==6){
				grade='D';
			} 
			else if(score==5){
				grade='E';
			} 
			else if(score==4){
				grade='E';
			} 
			else if(score==3){
				grade='E';
			} 
			else if(score==2){
				grade='E';
			} 
			else if(score==1){
				grade='E';
			} 
			else if(score==0){
				grade='E';
			} 
			cout << "等级是:" << grade << endl;
		}
		else{
			cout << "输入有误！";
		}
		
	}
	return 0;			
}

