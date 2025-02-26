#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    char arry[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arry[i][j] = ' ';
        }
    }
    for (int i=0;i< N;i++) {
        arry[i][i] ='\\';
        arry[i][N-i-1] ='/';
    }
    arry[N/2][N/2] ='X';
    for (int i =0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout <<arry[i][j];
        }
        cout << endl;
    }
    return 0;
}
