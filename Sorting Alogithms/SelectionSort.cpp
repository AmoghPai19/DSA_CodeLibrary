#include <iostream>
using namespace std;

void selection_sort(int n, int *a) {
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i + 1; j <= n - 1; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selection_sort(n, a);

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
