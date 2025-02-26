#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Length of the array

        // The minimum number of operations of the first type needed
        cout << (n + 2) / 3 << endl; // Equivalent to ceil(n / 3)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
