#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int cls;
    char section;
    int id;
};
int main() {
    int N;
    cin >> N;
    cin.ignore();
    Student students[100];
    for (int i = 0; i < N; i++) {
        getline(cin, students[i].name, ' ');
        cin >> students[i].cls >> students[i].section >> students[i].id;
        cin.ignore();
    }
    for (int i = 0; i < N / 2; i++) {
        swap(students[i].section, students[N - 1 - i].section);
    }
    for (int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }
    return 0;
}
