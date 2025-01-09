#include <iostream>
#include <string>
using namespace std;

int BruteForceStringMatch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    // Iterate through the text until there's no room for the pattern
    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Compare the pattern with the substring of text
        while (j < m && pattern[j] == text[i + j]) {
            j++;
        }

        // If the whole pattern matched, return the starting index
        if (j == m) {
            return i;
        }
    }

    // If no match is found, return -1
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int result = BruteForceStringMatch(text, pattern);

    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found." << endl;
    }

    return 0;
}

