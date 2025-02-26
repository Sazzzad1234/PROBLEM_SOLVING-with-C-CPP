#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the number of lights
        vector<int> switches(2 * n);
        int countOn = 0; // Count of switches that are on

        // Read the state of the switches
        for (int i = 0; i < 2 * n; i++) {
            cin >> switches[i];
            if (switches[i] == 1) {
                countOn++;
            }
        }

        // Maximum number of lights that can be turned on
        int maxLightsOn = min(n, countOn);

        // Minimum number of lights that can be turned on
        int minLightsOn = max(0, (countOn + 1) / 2 - n + 1);

        cout << minLightsOn << " " << maxLightsOn << endl;
    }
    return 0;
}
