// D. Odd Day Out
// URL: https://codeforces.com/group/Rilx5irOux/contest/620529/problem/D
// Time: 3/6/2026, 01:17:42 PM
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define i64 long long
#define ll long long
#define i32 int32_t
// fixed << setprecision()
void solve() {
    ll x , y; cin >> x >> y;
    ll sum = x + y;
    if (sum % 2 == 0){
        cout <<"NO"<<"\n";
    }
    else {
        cout <<"YES"<<"\n";
    }
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
