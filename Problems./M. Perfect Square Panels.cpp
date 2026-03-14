#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> h(n), w(n);

    for (auto &x : h) cin >> x;
    for (auto &x : w) cin >> x;

    auto can = [&](ll s) {
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            if (h[i] >= s) {
                sum += w[i];
                if (sum >= s) return true;
            } else {
                sum = 0;
            }
        }
        return false;
    };

    ll l = 1, r = 1e9, ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (can(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans * ans << "\n";
}
