#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(const string &s, const string &target) {
    int j = 0; // Pointer for target string "hello"
    for (char c : s) {
        if (c == target[j]) {
            j++; // Move to the next character in "hello"
        }
        if (j == target.size()) {
            return true; // Found all characters in order
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    
    if (isSubsequence(s, "hello")) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
