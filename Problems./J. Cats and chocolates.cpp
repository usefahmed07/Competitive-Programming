// J. Cats and chocolates
// URL: https://codeforces.com/group/6OEUPzk8Ai/contest/273293/problem/J
// Date: 4/8/2026
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
    int a , b , x; cin >> a >> b >> x;
    if (a % x == 0 || b % x == 0 || (a + b) % x == 0){
        cout <<"YES"<<"\n";
    }
    else {
        cout <<"NO"<<"\n";
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
