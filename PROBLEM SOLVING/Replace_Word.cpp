#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T
    for (int i = 0; i < T; i++) {
        string S, X;
        getline(cin, S); // Read the entire line for S
        getline(cin, X); // Read the entire line for X
        
        // Replace all occurrences of X in S with '#'
        size_t pos = 0;
        while ((pos = S.find(X, pos)) != string::npos) {
            S.replace(pos, X.length(), "#"); // Replace X with '#'
            pos += 1; // Move past the '#' to avoid infinite loop
        }
        cout << S << endl; // Output the modified string
    }
    return 0;
}
