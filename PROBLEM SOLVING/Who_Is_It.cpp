#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    int id;
    string name;
    char sec;
    int mark;
};
int main() {
    int T;
    cin >> T;
    while (T--) {
        Student s1, s2, s3;
        
        cin >> s1.id >> s1.name >> s1.sec >> s1.mark;
        cin >> s2.id >> s2.name >> s2.sec >> s2.mark;
        cin >> s3.id >> s3.name >> s3.sec >> s3.mark;

        Student topper = s1;
        if (s2.mark > topper.mark || (s2.mark == topper.mark && s2.id < topper.id)) {
            topper = s2;
        }
        if (s3.mark > topper.mark || (s3.mark == topper.mark && s3.id < topper.id)) {
            topper = s3;
        }
        cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.mark << endl;
    }
    return 0;
}
