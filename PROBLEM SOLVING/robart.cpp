#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // Standard input/output without optimizations
    ll n, p;
    cin >> n >> p;

    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<ll, ll> fruitCount; // To track counts of each fruit type
    ll left = 0, right = 0, uniqueFruits = 0, maxJuices = 0;

    while (right < n) {
        // Add the current fruit to the window
        if (fruitCount[arr[right]] == 0) {
            uniqueFruits++;
        }
        fruitCount[arr[right]]++;
        right++;

        // If unique fruit types exceed the number of juicers, shrink the window
        while (uniqueFruits > p) {
            fruitCount[arr[left]]--;
            if (fruitCount[arr[left]] == 0) {
                uniqueFruits--;
            }
            left++;
        }

        // Update the maximum length of the valid window
        maxJuices = max(maxJuices, right - left);
    }

    cout << maxJuices << endl;

    return 0;
}
