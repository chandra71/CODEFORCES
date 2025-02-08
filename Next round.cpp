#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold = scores[k - 1], count = 0;
    for (int score : scores) {
        if (score >= threshold && score > 0) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
