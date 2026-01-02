#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    long long a[n + 2];
    long long diff[n + 3];

    // initialize diff array
    for (int i = 0; i <= n + 2; i++)
        diff[i] = 0;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (q--) {
        int L, R;
        long long val;
        cin >> L >> R >> val;

        diff[L] += val;
        diff[R + 1] -= val;
    }

    long long add = 0;
    for (int i = 1; i <= n; i++) {
        add += diff[i];
        cout << a[i] + add << " ";
    }

    return 0;
}
