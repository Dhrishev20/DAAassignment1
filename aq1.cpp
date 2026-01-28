#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<long long>());
    cout << A[0] + A[1] << endl;
}
int main() {
    int T;
    cout<<"enter no. of test case";
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}