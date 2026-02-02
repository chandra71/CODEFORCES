#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>()); // descending order

    int totalSum = accumulate(a.begin(), a.end(), 0);
    int mySum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        mySum += a[i];
        totalSum -= a[i];
        cnt++;

        if (mySum > totalSum) {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}
