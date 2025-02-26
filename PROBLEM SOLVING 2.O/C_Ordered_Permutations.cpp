#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

vector<int> find_kth_permutation(int n, long long k) {
    vector<int> permutation;
    vector<bool> used(n + 1, false);
    k--; // Convert to 0-based index

    for (int i = 1; i <= n; ++i) {
        long long fact = factorial(n - i);
        for (int j = 1; j <= n; ++j) {
            if (!used[j]) {
                if (k < fact) {
                    permutation.push_back(j);
                    used[j] = true;
                    break;
                }
                k -= fact;
            }
        }
    }
    
    return permutation;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        long long total_permutations = factorial(n - 1);
        if (k > total_permutations) {
            cout << -1 << endl;
            continue;
        }

        vector<int> result = find_kth_permutation(n, k);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
