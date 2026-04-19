#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R, K;
    cin >> L >> R >> K;

    int ans = R / K - (L - 1) / K;
    cout << ans << "\n";

    return 0;
}
