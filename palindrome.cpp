#include <iostream>
#include <string>
#include <algorithm> // Include this for reverse()
using namespace std;

int main() {
    string n;
    cin >> n;
    
    // Reverse the number and remove leading zeros
    string reversed_n = n;
    reverse(reversed_n.begin(), reversed_n.end());
    size_t first_non_zero = reversed_n.find_first_not_of('0');
    if (first_non_zero != string::npos) {
        reversed_n = reversed_n.substr(first_non_zero);
    } else {
        reversed_n = "0"; // Handle case where input is all zeros
    }
    cout << reversed_n << endl;
    
    // Check if the number is a palindrome
    if (n == string(n.rbegin(), n.rend())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
