#include <iostream>
using namespace std;

int main() {
    double distance,totalCost;
    int hour;

    cout << "请输入出行的公里数：";
    cin >> distance;
    cout << "请输入出行的时间（24小时制）：";
    cin >> hour;

    // 根据出行时间选择不同的收费标准
    if ((hour >= 7 && hour < 9) || (hour >= 16 && hour < 18)) {
        // 高峰时段
        if (distance == 0) {
            totalCost = 0;
        } 
		else if (distance > 3){
            totalCost = 15 + (distance -3) * 3;
        }
        else{
        	totalCost = 15;
		}
    } 
	else {
        // 平常时段
        if (distance == 0) {
            totalCost = 0;
        } 
		else if (distance > 3){
            totalCost = 10 + (distance -3) * 2.5;
        }
        else{
        	totalCost = 10;
		}
    }

    cout << "出租车费用为：" << totalCost << "元" << endl;

    return 0;
}

