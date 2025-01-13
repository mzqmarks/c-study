#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int square = i * i;
        cout << square;
        if(i==N){
        	continue; 
		}
		cout << "¡¢";
    }
    cout << "¡£";
    return 0;
}

