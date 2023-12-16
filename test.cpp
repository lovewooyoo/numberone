#include <iostream>
using namespace std;


void fix56(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 5 && arr[i+1] != 6) {
            for (int j = i+1; j < size; j++) {
                if (arr[j] == 6 && arr[j-1] != 5) {
                    int temp = arr[i+1];
                    arr[i+1] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1,5,4,3,6,5,7,3,2,4,4,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    fix56(arr, size);

    cout << "Changed array: ";
    printArray(arr, size);

    return 0;
}
