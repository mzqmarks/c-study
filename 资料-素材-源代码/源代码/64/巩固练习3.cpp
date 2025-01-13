#include <iostream>
using namespace std;
int main() {
	int maxSize;
	cin >> maxSize;
    int originalNumbers[maxSize];  // 原始数字数组
    int numbersWithTwo[maxSize];   // 含有数字2的数字数组
    int twoCount = 0;       // 含有数字2的数字数量
	
	for(int i=0;i<maxSize;i++){
		cin >> originalNumbers[i];
		if (originalNumbers[i] % 10 == 2 || originalNumbers[i] / 10 == 2) {
                numbersWithTwo[twoCount] = originalNumbers[i];
                twoCount++;
    	}
	}

    // 输出含有数字2的数字数组
    for (int i = 0; i < twoCount; i++) {
        cout << numbersWithTwo[i] << " ";
	}
    return 0;
}

