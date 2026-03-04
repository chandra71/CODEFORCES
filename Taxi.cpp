#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> count(5, 0);  // count[1], count[2], count[3], count[4]

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    int taxis = 0;

    // Groups of 4
    taxis += count[4];

    // Groups of 3
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);  // Pair 3 with 1

    // Groups of 2
    taxis += count[2] / 2;
    if (count[2] % 2 == 1) {
        taxis++;
        count[1] = max(0, count[1] - 2);
    }

    // Remaining groups of 1
    taxis += (count[1] + 3) / 4;

    cout << taxis << endl;

    return 0;
}