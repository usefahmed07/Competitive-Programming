#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long v;
    cin >> n >> v;

    vector<long long> A(n), D(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> D[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] * v >= D[i]) {
            ans++;
        }
    }

    cout << ans << '\n';
}
