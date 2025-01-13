#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "请输入连胜场数：";
    cin >> num;
	if(num>=0 && num<=100){
		switch (num/10) {
        	case 0:
            	cout << "青铜";
            	break;
			case 1:
            	cout << "白银";
            	break;
        	case 2:
           		cout << "黄金";
            	break;
        	case 3:
        	case 4:
			case 5: 
            	cout << "钻石";
            	break;
        	case 6:
        	case 7:
        	case 8:
        	case 9:
        	case 10:
            	cout << "王者";
            	break;
    	}
	}  
	else{
		cout << "输入错误，请从新输入！"; 
	} 
    return 0;
}

