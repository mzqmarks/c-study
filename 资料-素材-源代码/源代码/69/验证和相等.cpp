#include <iostream>
int main() {
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	
	// 计算期望的和
    int expectedSum = 0;
    for (int i = 1; i <= 9; i++) {
        expectedSum += i;
    }
    expectedSum /= N; // 期望的和应该是相等的，所以我们除以 N
	
    // 检查每一行的和
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum != expectedSum) {
            cout << "这不是一个魔方阵（九宫格）！" << std::endl;
            return 0;
        }
    }

    // 检查每一列的和
    for (int j = 0; j < N; j++) {
        int colSum = 0;
        for (int i = 0; i < N; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != expectedSum) {
            std::cout << "这不是一个魔方阵（九宫格）！" << std::endl;
            return 0;
        }
    }

    // 检查主对角线的和
    int mainDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        mainDiagonalSum += matrix[i][i];
    }
    if (mainDiagonalSum != expectedSum) {
        std::cout << "这不是一个魔方阵（九宫格）！" << std::endl;
        return 0;
    }

    // 检查副对角线的和
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        secondaryDiagonalSum += matrix[i][N - 1 - i];
    }
    if (secondaryDiagonalSum != expectedSum) {
        std::cout << "这不是一个魔方阵（九宫格）！" << std::endl;
        return 0;
    }

    // 如果所有检查通过，那么这是一个魔方阵
    std::cout << "这是一个魔方阵（九宫格）！" << std::endl;

    return 0;
}

