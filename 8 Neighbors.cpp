#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X, Y;
    cin >> X >> Y;

    // Convert to 0-based index
    X--; 
    Y--;

    // Directions for 8 neighbors
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++) {
        int nx = X + dx[i];
        int ny = Y + dy[i];

        // Check if neighbor is inside the grid
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                cout << "no";
                return 0;
            }
        }
    }

    cout << "yes";
    return 0;
}
