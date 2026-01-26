#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0;  // pointer for "hello"

    for (int i = 0; i < s.size() && j < target.size(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
    }

    if (j == target.size())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
