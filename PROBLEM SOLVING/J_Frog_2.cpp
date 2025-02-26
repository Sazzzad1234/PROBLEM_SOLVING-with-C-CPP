#include <bits/stdc++.h>
using namespace std;
int min_cost(int i, int h[], int N, int K) {
    // Base case: if we're on the last stone, no cost is needed
    if (i == N - 1) return 0;

    int minimum_cost = INT_MAX;

    // Try jumping to stones i+1, i+2, ..., i+K (within bounds)
    for (int j = 1; j <= K && i + j < N; ++j) {
        int jump_cost = abs(h[i] - h[i + j]) + min_cost(i + j, h, N, K);
        minimum_cost = min(minimum_cost, jump_cost);
    }

    return minimum_cost;
}

int main() {
    int N, K;
    cin >> N >> K;

    int h[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    // Calculate the minimum cost starting from stone 1 (index 0)
    int result = min_cost(0, h, N, K);
    cout << result << endl;

    return 0;
}
