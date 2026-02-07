#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long result = (b - (a % b)) % b;
        cout << result << endl;
    }

    return 0;
}
