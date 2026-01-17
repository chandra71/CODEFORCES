#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    // Count lucky digits (4 and 7)
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }

    // If no lucky digits, it's not nearly lucky
    if (count == 0) {
        cout << "NO";
        return 0;
    }

    // Check if count is a lucky number
    while (count > 0) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        count /= 10;
    }

    cout << "YES";
    return 0;
}
