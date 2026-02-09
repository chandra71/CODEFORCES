#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array in ascending order
    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
