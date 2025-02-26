#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;

struct Page {
    int chapter;
    int energy;
    int score;
};

// Comparison function for sorting
bool comparePages(Page a, Page b) {
    if (a.chapter == b.chapter) {
        return a.energy < b.energy; // Sort pages within the same chapter by energy
    }
    return a.chapter < b.chapter;  // Otherwise, sort by chapter number
}

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    Page pages[MAX_N]; // Array to store all page information

    // Input: Chapter numbers
    for (int i = 0; i < N; i++) cin >> pages[i].chapter;

    // Input: Energy costs
    for (int i = 0; i < N; i++) cin >> pages[i].energy;

    // Input: Scores
    for (int i = 0; i < N; i++) cin >> pages[i].score;

    // Sort all pages by chapter and energy
    sort(pages, pages + N, comparePages);

    int maxScore = 0;      // Total maximum score
    int currentEnergy = 0; // Current energy used
    int chapterStart = 0;  // Starting index of the current chapter

    while (chapterStart < N) {
        int chapter = pages[chapterStart].chapter;
        int chapterScore = 0, chapterEnergy = 0;

        // Process all pages in the current chapter
        for (int i = chapterStart; i < N && pages[i].chapter == chapter; i++) {
            chapterEnergy += pages[i].energy; // Add page energy to chapter's energy
            chapterScore += pages[i].score;  // Add page score to chapter's score

            if (currentEnergy + chapterEnergy <= K) {
                maxScore += pages[i].score; // Add to total score if within energy limit
                currentEnergy += pages[i].energy; // Deduct energy used
            } else {
                break; // Stop processing this chapter if energy exceeds limit
            }
        }

        // Move to the next chapter
        while (chapterStart < N && pages[chapterStart].chapter == chapter) {
            chapterStart++;
        }
    }

    cout << maxScore << endl;
    return 0;
}
