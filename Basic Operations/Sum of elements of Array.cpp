#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask the user to input the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size 'n'
    int arr[n];

    // Ask the user to input the array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Output the result
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
