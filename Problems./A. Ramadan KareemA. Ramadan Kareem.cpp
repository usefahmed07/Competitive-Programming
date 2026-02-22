    // A. Ramadan Kareem
    // URL: https://codeforces.com/group/mOayoTuNLs/contest/673247/problem/A
    // Time: 2/21/2026, 14:36:31 
    #include <bits/stdc++.h>
    using namespace std;
    #define int         long long
    #define int long long
    #define vi          vector<int>
    #define pii         pair<int, int>
    #define all(v)      v.begin(), v.end()
    #define finish(s)   { cout << s << "\n"; return; }
    template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
    template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
    void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
    void UseFile() { freopen("file.in", "r", stdin); freopen("file.out", "w", stdout); }
    const int MOD = 1000000007, INF = 2e18;
    void solve() {
    int N; 
    cin >> N;

    if (30 % N == 0) {
        cout << "Ramadan Kareem\n";
    } 
    else {
        cout << N - (30 % N) << "\n";
    }
    }
        signed main() {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
            solve();
        }
