#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 45, 8, 92, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements of the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
