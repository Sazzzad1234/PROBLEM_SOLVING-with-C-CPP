#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;  // Length of the field
        cin >> N;
        string field;
        cin >> field;

        int scarecrows = 0;  // Count of scarecrows
        for (int i = 0; i < N; i++) {
            if (field[i] == '.') {  // Found a crop-growing spot
                scarecrows++;       // Place a scarecrow
                i += 2;             // Skip the next two cells
            }
        }

        // Print the result for this case
        cout << "Case " << t << ": " << scarecrows << endl;
    }

    return 0;
}
