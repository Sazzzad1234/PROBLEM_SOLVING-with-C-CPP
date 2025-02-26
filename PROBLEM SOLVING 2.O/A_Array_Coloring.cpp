#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Read length of the array
        
        vector<int> a(n);
        int oddCount = 0, evenCount = 0;
        
        // Read array elements and count odd and even numbers
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        
        // Check conditions for coloring
        if (oddCount > 0 && evenCount > 0) {
            // If there's at least one odd and one even number
            cout << "YES" << endl;
        } else if (oddCount > 1) {
            // If there are at least two odd numbers
            cout << "YES" << endl;
        } else {
            // If all are odd or all are even
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
