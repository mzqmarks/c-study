#include <iostream>
using namespace std;
int main() {
    char choice;
    cout << "请投票y或者n: ";
    cin >> choice;

    if(choice == 'y'){
        cout << "你投了赞成票。";
    }
    else if(choice == 'n'){
    	cout << "你投了反对票。";
	}
    else{
    	cout << "无效票，视为弃权。";
	}
    return 0;
}

