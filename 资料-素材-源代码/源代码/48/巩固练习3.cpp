#include <iostream>
using namespace std;
int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    for (int i = 0; i < 26; i++) {
        cout << lowercase << " " << uppercase << " ";
        lowercase++;
        uppercase++;
    }
    cout << endl;
    return 0;
}

