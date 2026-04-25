/**
      B. Calculate The Grade
 *    author:  BetterCallUssif
 *    created: 25.04.2026 17:18:32
      URL : https://codeforces.com/group/WE2jmVU6Mi/contest/677810/problem/B
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
   int x; cin >> x;
   if (x >= 85){
    cout <<"A"<<"\n";
   }
   else if (x < 85 && x >= 75){
    cout <<"B"<<"\n";
   }
   else if (x < 75 && x >= 65){
    cout <<"C"<<"\n";
   }
   else if (x < 65 && x >= 50){
    cout <<"D"<<"\n";
   }
   else {
    cout <<"F"<<"\n";
   }

}
/*
*/
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("guess.out", "w", stdout);
    solve();
    return 0;
}
