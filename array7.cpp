#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 3, 7, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10; // The target sum

    cout << "Pairs with a sum of " << target << " are:" << endl;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}

