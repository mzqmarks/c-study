#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    
    cout << "请输入三个角度的度数：" << endl;
    cin >> angle1 >> angle2 >> angle3;
    
    if (angle1 + angle2 + angle3 == 180.0) {
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "这是一个直角三角形！" << endl;
        } else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            cout << "这是一个锐角三角形！" << endl;
        } else {
            cout << "这是一个钝角三角形！" << endl;
        }
    } else {
        cout << "无法构成一个三角形。" << endl;
    }
    
    return 0;
}

