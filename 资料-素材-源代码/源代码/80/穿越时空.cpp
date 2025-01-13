#include <iostream>
using namespace std;
int main(){
	int year1=2023,year2=2022;
	int *p1,*p2,*p;
	int num;
	p1 = &year1;
	p2 = &year2;
	//根据指针地址输出内存内容 ,p1是year1的地址 
	cout << *p1 << " " << *p2 << endl;
	
	//指针地址指向交换 
	p = p1;
	p1 = p2;
	p2 = p;
	//地址更好p1指向了year2 
	cout << *p1 << " " << *p2<< endl;
	//但是内存内容没有改变所以year1还是2023 
	cout << year1 << " " << year2<< endl;
	
	//换了内存的内容 
	num = *p1;
	*p1 = *p2;
	*p2 = num;
	//内存内容改变year1变成了2022，之前已经地址互换了p1指向的是year2 
	cout << *p1 << " " << *p2<< endl;
	cout << year1 << " " << year2<< endl;
	return 0; 
}

