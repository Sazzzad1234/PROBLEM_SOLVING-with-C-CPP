#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MOD = 100000007;
int countWays(int coins[], int counts[], int n, int K, int idx) {
    if (K == 0) return 1; // Found a valid way
    if (K < 0 || idx >= n) return 0; // Out of bounds or negative amount

    int totalWays = 0;

    // Try using 0 to counts[idx] coins of type coins[idx]
    for (int i = 0; i <= counts[idx]; i++) {
        totalWays += countWays(coins, counts, n, K - i * coins[idx], idx + 1);
        totalWays %= MOD; // To prevent overflow
    }
    return totalWays;
}
int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n, K;
        cin >> n >> K;

        int coins[50], counts[50];
        for (int i = 0; i < n; i++) {
            cin >> coins[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> counts[i];
        }

        int result = countWays(coins, counts, n, K, 0);
        cout << "Case " << t << ": " << result << endl;
    }
    return 0;
}
