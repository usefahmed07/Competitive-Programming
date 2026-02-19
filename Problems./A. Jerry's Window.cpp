    // A. Jerry's Window
    // https://codeforces.com/gym/101020/problem/A
    // Time: 2/19/2026, 14:13:13
    #include <bits/stdc++.h>
    using namespace std;
    #define int         long long
    #define ll          long long
    #define vi          vector<int>
    #define pii         pair<int, int>
    #define all(v)      v.begin(), v.end()
    #define finish(s)   { cout << s << "\n"; return; }
    template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
    template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
    void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
    const int MOD = 1000000007, INF = 2e18;
    void solve() {
    freopen("window.in", "r", stdin);
 
    int T; cin >> T;
    
    while (T--) {
        ll X, Y; cin >> X >> Y;
        cout << X * Y << '\n';
    }
    }
    //
    signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
        solve();
    }
