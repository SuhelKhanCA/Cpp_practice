#include<iostream>
using namespace std;

int main() {
    int arr[10], n, i, first, second;

    cout << "Enter the number of elements (1 to 10): ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    first = second = INT_MIN;

    for(i = 0; i < n ; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
        cout << "There is no second largest element\n";
    else
        cout << "The second largest element is " << second;

    return 0;
}

