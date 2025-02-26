#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        vector<int> a(k);
        unordered_set<int> unique_values;

        for (int i = 0; i < k; ++i) {
            cin >> a[i];
            unique_values.insert(a[i]);
        }

        // The number of unique values gives us a potential n
        int n = unique_values.size();
        // m can be calculated as k / n, ensuring it divides evenly
        int m = k / n;

        // If k is not divisible by n, adjust n and m accordingly
        if (k % n != 0) {
            n = 1; // Set n to 1
            m = k; // Set m to k
        }

        cout << n << " " << m << endl;
    }

    return 0;
}
