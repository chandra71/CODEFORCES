#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<long long> A(N + 1, 0); // Using 1-based indexing
    
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    // Compute prefix sum
    vector<long long> prefixSum(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }
    
    // Answer queries
    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << prefixSum[R] - prefixSum[L - 1] << "\n";
    }
    
    return 0;
}