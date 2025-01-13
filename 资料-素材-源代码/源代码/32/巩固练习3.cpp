#include <iostream>
#include <windows.h>
using namespace std; 
int main() {
    int score = 0;

    // 第一题
    if (MessageBox(NULL, "C++是一门编程语言吗？", "问题1", MB_YESNO) == IDYES) {
        score++;
    }
    // 第二题
    if (MessageBox(NULL, "Windows是一种操作系统吗？", "问题2", MB_YESNO) == IDYES) {
        score++;
    }
    // 第三题
    if (MessageBox(NULL, "C++中，switch 语句用于循环。", "问题3", MB_YESNO) == IDNO) {
        score++;
    }
	cout << "你的得分是：" <<  score;

    return 0;
}

