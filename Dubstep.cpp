#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.find("WUB") != string::npos) {
        s.replace(s.find("WUB"), 3, " ");
    }

    bool space = false;
    for (char c : s) {
        if (c == ' ') {
            if (!space) cout << c;
            space = true;
        } else {
            cout << c;
            space = false;
        }
    }

    return 0;
}