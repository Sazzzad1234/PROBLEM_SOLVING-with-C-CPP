#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, S;
        cin >> N >> S;
        int A[100];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A, A + N);
        bool found = false;
        for (int i=0;i<N-2;i++){
            int left = i+1;
            int right = N-1;
            while (left<right){
                int Sum =A[i]+A[left]+A[right];
                if (Sum==S) {
                    found = true;
                    break;
                } else if (Sum<S){
                    left++;
                } else {
                    right--;
                }
            }
            if (found)
            break;
        }
       if (found) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}

    }
    return 0;
}
