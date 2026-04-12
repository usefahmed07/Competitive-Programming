// J. Who is Bigger
// URL : https://codeforces.com/group/ouFw4vHtOl/contest/682113/problem/J
// Date: 4/12/2026
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll  long long
#define vi          vector<int>
#define pii         pair<int, int>
#define all(v)      v.begin(), v.end()
#define finish(s)   { cout << s << "\n"; return; }
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
void UseFile() { freopen("file.in", "r", stdin); freopen("file.out", "w", stdout); }
const int MOD = 1000000007, INF = 2e18;
// fixed << setprecision()
void solve() {
    int t; cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        while (a.size() > 1 && a[0] == '0') a.erase(0, 1);
        while (b.size() > 1 && b[0] == '0') b.erase(0, 1);

        if (a.size() > b.size()) cout << "First\n";
        else if (a.size() < b.size()) cout << "Second\n";
        else {
            if (a == b) cout << "Equal\n";
            else if (a > b) cout << "First\n";
            else cout << "Second\n";
        }
    }
}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
