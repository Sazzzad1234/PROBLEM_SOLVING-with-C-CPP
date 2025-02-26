#include <bits/stdc++.h>
using namespace std;
class student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_mark;
};
bool cmp(student l, student r){
    if (l.eng_mark > r.eng_mark){
        return true;
    } else if (l.eng_mark < r.eng_mark){
        return false;
    } else {
        if (l.math_marks > r.math_marks){
            return true;
        } else if (l.math_marks < r.math_marks){
            return false;
        } else {
            return l.id < r.id;
        }
    }
}
int main() {
    int N;
    cin >> N;
    student a[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_mark;
    }
    sort(a, a + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_mark << endl;
    }
    return 0;
}
