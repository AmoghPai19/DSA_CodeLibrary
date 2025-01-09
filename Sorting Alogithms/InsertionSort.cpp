#include <iostream>
using namespace std;

void insertion_sort(int n, int *A) {
    for (int i = 1; i <= n - 1; i++) {
        int v = A[i]; // Store the current element
        int j = i - 1;

        // Shift elements of A[0..i-1] that are greater than v to one position ahead
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        // Place v in its correct position
        A[j + 1] = v;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insertion_sort(n, A);

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
