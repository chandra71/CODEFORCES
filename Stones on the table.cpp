#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int removed = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removed++;
        }
    }

    cout << removed << endl;
    return 0;
}
