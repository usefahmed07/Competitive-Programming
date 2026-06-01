/** 
    A. Boxes and Balls
 *  author:  BetterCallUssif
 *  created: 1.06.2026
    URL : https://codeforces.com/gym/103957/problem/A
**/
/// I am snatchin chains and burnin' tattoos
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define F first
#define S second
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define mp(x, y) make_pair(x, y)
#define popCnt(x) (__builtin_popcountll(x))
#define int ll
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
const int N = 2e6 + 5, A = 26, LG = 19, MOD = 1e9 + 7;
const long double PI = acos(-1);
const long double EPS = 1e-7;
// fixed << setprecision()
void solve() {
    int T; cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int n; cin >> n;

        long long l = 0, r = 2000000000LL, ans = 0;

        while (l <= r) {
            long long mid = l + (r - l) / 2;

            __int128 cur = (__int128)mid * (mid + 1) / 2;

            if (cur <= n) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        __int128 res = (__int128)ans * (ans + 1) / 2;

        cout << "Case #" << tc << ": " << (long long)res << '\n';
    }
}
/*
*/
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("guess.out", "w", stdout);
    solve();
    return 0;
}
