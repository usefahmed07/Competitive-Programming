// H. B-Syndrome
// URL: https://codeforces.com/group/Rilx5irOux/contest/603455/problem/H
// Time: 3/5/2026, 01:17:42 PM
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define i64 long long
#define ll long long
#define i32 int32_t
// fixed << setprecision()
void solve() {
    int t; cin >> t;
    while (t--){
        int a , b; cin >> a >> b;
        if (b % a == 0){
            cout <<"YES"<<"\n";
        }
        else{
            cout <<"NO"<<"\n";
        }
    }
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
