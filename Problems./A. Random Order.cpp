/** 
    A. Random Order
 *  author:  BetterCallUssif
 *  created: 23.05.2026
    URL : https://codeforces.com/gym/106494/problem/A
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

    int n; cin >> n;

    vector<int> p(n + 1), pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int mxEasy = 0;
    int mnHard = 1e9;

    int ans = -1;

    for (int k = 1; k <= n / 2; k++) {
        mxEasy = max(mxEasy, pos[k]);
        mnHard = min(mnHard, pos[n - k + 1]);

        if (mxEasy < mnHard)
            ans = k;
    }

    cout << ans << '\n';
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
