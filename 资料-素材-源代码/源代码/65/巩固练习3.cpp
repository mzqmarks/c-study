#include <iostream>
using namespace std;
int main() {
	int numStudents;
	cin >> numStudents;
    int scores[numStudents];  
    int total = 0;
	
    for (int i = 0; i < numStudents; i++) {
        cin >> scores[i];
        total += scores[i];
    }
 	cout << total/numStudents*1.0;
    return 0;
}

