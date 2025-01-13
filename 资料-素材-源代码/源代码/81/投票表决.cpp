#include <iostream>
using namespace std;
int main(){
	int vote[10]={0};
	int *p,abstention=0,agree=0,beAgainst=0;
	p = vote;
	for(int i=0;i<10;i++){
		cin >> *(p+i);
	}

	for(int i=0;i<10;i++){
		cout << *(p+i) << " ";
		if(*(p+i)==1){
			agree++;
		}
		else if(*(p+i)==-1){
			beAgainst++;
		}
		else{
			abstention++;
		}
	}
	cout << endl;  
	cout << "决议最终，赞同：" << agree << "票；反对：" << beAgainst << "票；弃权：" << abstention << "票";
	return 0; 
}

