#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements multiplied by 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;

    return 0;
}
