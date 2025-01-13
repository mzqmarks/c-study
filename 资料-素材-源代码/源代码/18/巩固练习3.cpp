#include <iostream>
using namespace std;
int main(){
	
	bool isLightOn = false;
	string onOrOff;
	cin >> onOrOff;
	
	if(onOrOff=="按下"){
		isLightOn = !isLightOn;
	}
	
    if (isLightOn) {
        cout << "开";
    } else {
        cout << "关";
    }

    return 0;
}


