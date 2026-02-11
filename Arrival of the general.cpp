#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxHeight = a[0], minHeight = a[0];
    int maxPos = 0, minPos = 0;

    // Find leftmost max
    for(int i = 0; i < n; i++) {
        if(a[i] > maxHeight) {
            maxHeight = a[i];
            maxPos = i;
        }
    }

    // Find rightmost min
    for(int i = 0; i < n; i++) {
        if(a[i] <= minHeight) {
            minHeight = a[i];
            minPos = i;
        }
    }

    int swaps = maxPos + (n - 1 - minPos);

    if(maxPos > minPos) {
        swaps--;  // adjust because min shifts left
    }

    cout << swaps << endl;

    return 0;
}
