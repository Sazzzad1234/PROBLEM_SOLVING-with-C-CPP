#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

const int MOD = 1e9 + 7;

// Function to compute Fibonacci numbers and their indices divisible by k
std::vector<long long> fibonacci_indices(int k) {
    std::vector<long long> fibs;
    std::vector<long long> indices;

    long long a = 1, b = 1, index = 1;

    // Store first two Fibonacci numbers
    fibs.push_back(a);
    fibs.push_back(b);
    
    // Generate Fibonacci numbers and store indices of those divisible by k
    while (true) {
        long long next = (a + b) % MOD;
        fibs.push_back(next);
        index++;
        
        if (next % k == 0) {
            indices.push_back(next);
        }
        
        // Stop condition: if we reach a very large Fibonacci number
        if (next > 1e18) break; // Prevent overflow
        a = b;
        b = next;
    }
    
    return indices;
}

// Function to compute G(n, k)
long long G(long long n, int k) {
    std::vector<long long> indices = fibonacci_indices(k);
    
    // If n is larger than the number of indices found, return -1 or some invalid state
    if (n > indices.size()) {
        return -1; // or handle this case according to your needs
    }
    
    return indices[n - 1] % MOD; // Return the (n-1)th index as the output
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        long long n;
        int k;
        std::cin >> n >> k;
        
        long long result = G(n, k);
        std::cout << result << std::endl;
    }
    
    return 0;
}
