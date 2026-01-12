#include <iostream>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;

    long long totalCost = k * w * (w + 1) / 2;
    long long borrow = totalCost - n;

    if (borrow < 0)
        cout << 0;
    else
        cout << borrow;

    return 0;
}
