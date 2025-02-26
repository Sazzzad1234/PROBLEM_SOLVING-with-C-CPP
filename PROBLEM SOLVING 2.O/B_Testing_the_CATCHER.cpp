#include <iostream>
using namespace std;

// সীমাবদ্ধতা নির্দেশ করার জন্য কিছু ম্যাক্স ভ্যালু নেওয়া হলো
#define MAX_MISSILES 10000

int main() {
    int test_num = 1;
    int height[MAX_MISSILES];  // প্রতিটি টেস্টের জন্য সর্বোচ্চ ক্ষেপণাস্ত্র উচ্চতার অ্যারে
    int length[MAX_MISSILES];  // কমতে থাকা ক্রমের দৈর্ঘ্য রাখার জন্য অ্যারে

    while (true) {
        int h;
        int count = 0;  // ক্ষেপণাস্ত্র সংখ্যা গোনার জন্য
        
        // ইনপুট নেওয়া, -1 আসা পর্যন্ত
        while (cin >> h && h != -1) {
            height[count++] = h;
        }
        
        // যখন `-1` দিয়ে শুরু হবে, পুরো ইনপুট শেষ বলে ধরে নিতে হবে
        if (count == 0) break;

        int lis_length = 0;  // কমতে থাকা ক্রমের সর্বোচ্চ দৈর্ঘ্য

        // প্রতিটি ক্ষেপণাস্ত্র উচ্চতার জন্য
        for (int i = 0; i < count; i++) {
            int left = 0, right = lis_length;

            // বাইনারি সার্চ ব্যবহার করে অবস্থান বের করা
            while (left < right) {
                int mid = (left + right) / 2;
                if (length[mid] >= height[i])
                    left = mid + 1;
                else
                    right = mid;
            }

            // বর্তমান ক্ষেপণাস্ত্র উচ্চতা `length` অ্যারেতে যুক্ত
            length[left] = height[i];

            // নতুন উপাদান যুক্ত হলে ক্রমের দৈর্ঘ্য বৃদ্ধি
            if (left == lis_length)
                lis_length++;
        }

        // আউটপুট, টেস্ট নম্বর ও সর্বোচ্চ আটকানো ক্ষেপণাস্ত্র সংখ্যা
        cout << "Test #" << test_num++ << ":\n";
        cout << "maximum possible interceptions: " << lis_length << "\n\n";
    }
    return 0;
}
