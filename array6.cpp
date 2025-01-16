#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 15; // The value to search for
    int index = -1; // Default index if value is not found

    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            index = i;
            break; // Exit the loop once the value is found
        }
    }

    cout << "The index of the value " << value << " is: " << index << endl;

    return 0;
}
