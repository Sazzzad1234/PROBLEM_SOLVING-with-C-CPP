#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t; // read number of test cases

    while (t--) {
        int n, k; // n = number of shelves, k = number of bottles
        cin >> n >> k;

        // Use an unordered_map to store the maximum cost for each brand
        unordered_map<int, int> brand_costs;

        // Reading all bottles and keeping track of maximum costs per brand
        for (int i = 0; i < k; ++i) {
            int brand, cost;
            cin >> brand >> cost;
            brand_costs[brand] = max(brand_costs[brand], cost); // Store only the maximum cost
        }

        // Vector to store the maximum costs from each brand
        vector<int> costs;

        // Collect maximum costs from each brand
        for (const auto &entry : brand_costs) {
            costs.push_back(entry.second);
        }

        // Sort costs in descending order to prioritize the highest costs
        sort(costs.rbegin(), costs.rend());

        // Calculate maximum earnings by taking the highest costs up to n shelves
        long long max_earnings = 0;
        for (int i = 0; i < min(n, (int)costs.size()); ++i) {
            max_earnings += costs[i];
        }

        // Output the result for this test case
        cout << max_earnings << endl;
    }

    return 0;
}
