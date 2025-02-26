#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the Fibonacci numbers and find G(n, k)
long long G(long long n, long long k) {
    vector<long long> fib(2, 1);
    long long index = 2;  // Start from the 3rd Fibonacci number

    while (index < n) {
        long long next_fib = (fib[0] + fib[1]) % MOD;
        fib[0] = fib[1];
        fib[1] = next_fib;

        if (fib[1] % k == 0) {
            if (++index == n) {
                return next_fib; // Return the Fibonacci number that is divisible by k
            }
        } else {
            index++; // Only increment if it's not divisible
        }
    }

    return -1; // If not found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long result = G(n, k);
        cout << result << endl;
    }

    return 0;
}