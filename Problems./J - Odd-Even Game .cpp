/**
      J. Odd-Even Game
 *    author:  BetterCallUssif
 *    created: 17.04.2026 17:18:32
      URL : https://codeforces.com/gym/105922/problem/J
**/
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
    int a, b; cin >> a >> b;

    int odd, even;

    if (a % 2 == 1) {
        odd = a;
        even = b;
    } else {
        odd = b;
        even = a;
    }

    if (odd > even)
        cout << 1;
    else
        cout << 2;

}
/*


*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
