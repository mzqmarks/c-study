#include <iostream>
using namespace std;
int main(){
	int num = 1;
	char select;
	bool go = true; 
	cout << "开始不太准的心理测试：" << endl; 
	
	while(go){
		switch (num){
			case 1:
				cout << "1.你喜欢游泳吗？" << endl;
				cout << "A.不喜欢" << endl;
				cout << "B.喜欢" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						num = 2;
						break;
					case 'B':
						num = 4;
						break;
				}
				break;
			case 2:
				cout << "2.你害怕水吗？" << endl;
				cout << "A.很害怕" << endl;
				cout << "B.一点点害怕" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						num = 3;
						break;
					case 'B':
						num = 5;
						break;
				}
				break;
			case 3:
				cout << "3.你喜欢下雨天吗？" << endl;
				cout << "A. 喜欢" << endl;
				cout << "B. 不喜欢" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						num = 4;
						break;
					case 'B':
						num = 5;
						break;
				}
				break;
			case 4:
				cout << "4.如果下雨天，你更喜欢做什么呢？" << endl;
				cout << "A.穿雨衣出门" << endl;
				cout << "B.待在家里" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						num = 6;
						break;
					case 'B':
						num = 5;
						break;
				}
				break;
			case 5:
				cout << "5.你会喜欢参加游乐园的过山车吗？" << endl;
				cout << "A.喜欢" << endl;
				cout << "B.不喜欢" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						num = 6;
						break;
					case 'B':
						select = 'A'; 
						go = false;
						break;
				}
				break;
			case 6:
				cout << "6.你有没有忘记过东西？" << endl;
				cout << "A.经常忘记" << endl;
				cout << "B.很少忘记" << endl;
				cout << "请选择：";
				cin >> select;
				switch(select){
					case 'A':
						select = 'B'; 
						go = false;
						break;
					case 'B':
						select = 'C'; 
						go = false;
						break;
				}
				break;
		}
	}
	
	switch (select){
		case 'A':
			cout << "你可能对刺激和冒险的兴趣相对较低,你更喜欢稳定和可预测的情境。" << endl;
			break;
		case 'B':
			cout << "你可能是一个充满好奇心和冒险精神的人，但需要更多的努力来管理和提高你的注意力和记忆能力。" << endl;
			break;
		case 'C':
			cout << "你可能是一个注重细节、有条理并且喜欢稳定的人，通常能够很好地掌握自己的生活和事务，不太追求冒险或刺激。" << endl;		
			break;	 
	}
	
	cout << endl << "自己编的纯属娱乐，没有科学道理，所以这是一个不太准的心理测试！"; 
	return 0;
}
