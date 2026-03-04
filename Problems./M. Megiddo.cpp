// M. Megiddo
// URL: https://codeforces.com/group/Rilx5irOux/contest/538098/problem/M
// Time: 3/5/2026, 01:17:42 PM
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define i64 long long
#define ll long long
#define i32 int32_t
// fixed << setprecision()
void solve() {
    int a, b, c; cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c))
        cout << a << '\n';
    else if ((b > a && b < c) || (b < a && b > c))
        cout << b << '\n';
    else
        cout << c << '\n';
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
