#include <bits/stdc++.h>
using namespace std;

int main() {
    char X[100001];  // Character array to store the input

    // Read input until EOF
    while (cin >> X) {
        string S = X;  // Convert the char array to string
        string T = "";
        
        // Loop through each character and remove spaces
        for (int i = 0; i < S.length(); i++) {
            if (S[i] != ' ') {
                T += S[i];  // Add non-space characters to T
            }
        }
        
        // Sort the string T in alphabetical order
        sort(T.begin(), T.end());
        
        // Print the sorted string
        cout << T << endl;
    }

    return 0;
}
