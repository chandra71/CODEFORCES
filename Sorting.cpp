#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bubbleSort(A, N);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
