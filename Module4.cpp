//Wpphyuk Cjoi
#include <iostream>

using namespace std;

int main() {
    int size;
    do {
        cout << "Enter an integer greater than 2: ";
        cin >> size;
    } while (size <= 2 || size % 2 == 0);
    
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

/* ㅇㅇㅇ */

