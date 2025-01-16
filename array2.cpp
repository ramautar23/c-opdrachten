#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "The largest element in the array is: " << maxElement << endl;

    return 0;
}

