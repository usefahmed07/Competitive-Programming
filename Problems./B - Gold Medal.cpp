#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long m;
        cin >> m;

        long long ans = 0;
        vector<long long> cost;

        for (int i = 0; i < n; i++) {
            ans += a[i] / k;
            long long r = a[i] % k;
            if (r != 0)
                cost.push_back(k - r);
            else
                cost.push_back(0);
        }

        sort(cost.begin(), cost.end());

        for (auto c : cost) {
            if (c == 0) continue;
            if (m >= c) {
                m -= c;
                ans++;
            } else break;
        }

        ans += m / k;

        cout << ans << "\n";
    }
}
