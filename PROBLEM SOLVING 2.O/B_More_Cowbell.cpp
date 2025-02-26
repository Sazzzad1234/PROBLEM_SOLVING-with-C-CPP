#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int cowbells[100000];
    
    for (int i = 0; i < n; i++) {
        cin >> cowbells[i];
    }
    
    int max_size = 0;

    // We need to consider the pairs of cowbells
    for (int i = 0; i < n - k; i++) {
        // Pair the i-th cowbell with the (n - 1 - i)-th cowbell
        max_size = max(max_size, cowbells[i] + cowbells[n - 1 - i]);
    }
    
    // The maximum size will also include the largest single cowbell if there are leftover boxes
    for (int i = n - k; i < n; i++) {
        max_size = max(max_size, cowbells[i]);
    }
    
    cout << max_size << endl;
    
    return 0;
}
