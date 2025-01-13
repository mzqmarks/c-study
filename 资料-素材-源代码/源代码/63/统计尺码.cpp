#include <iostream>
using namespace std;
int main(){
	//M[155-165),L[165-175),XL[175-185) 
	int m=0,l=0,xl=0;
	float height[10] = {155.6,166.8,165.5,158.9,175.8,175,182.3,170.8,173.5,178.8};
	for(int i=0;i<10;i++){
		if(height[i]>=155 && height[i]<165){
			m++;
		}
		else if(height[i]>=165 && height[i]<175){
			l++;
		}
		else if(height[i]>=175 && height[i]<185){
			xl++;
		}
		else{
			cout << height[i] << " " << endl; 
		}
	}
	cout << m << " " << l << " " << xl;
	return 0;
} 

