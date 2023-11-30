#include <iostream>
using namespace std;

// Function to display the array
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);  // Pass array to function

    return 0;
}

