#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouy";

    for (char c : s) {
        c = tolower(c);
        if (vowels.find(c) == string::npos) {
            cout << "." << c;
        }
    }
    return 0;
}
