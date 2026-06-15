/** 
    A. Archivist
 *  author:  BetterCallUssif
 *  created: 15.06.2026
    URL : https://codeforces.com/gym/104013/problem/A
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
    int y; cin >> y;

    map<int, string> winner = {
        {1995, "ITMO"},
        {1996, "SPbSU"},
        {1997, "SPbSU"},
        {1998, "ITMO"},
        {1999, "ITMO"},
        {2000, "SPbSU"},
        {2001, "ITMO"},
        {2002, "ITMO"},
        {2003, "ITMO"},
        {2004, "ITMO"},
        {2005, "ITMO"},
        {2006, "PetrSU, ITMO"},
        {2007, "SPbSU"},
        {2008, "SPbSU"},
        {2009, "ITMO"},
        {2010, "ITMO"},
        {2011, "ITMO"},
        {2012, "ITMO"},
        {2013, "SPbSU"},
        {2014, "ITMO"},
        {2015, "ITMO"},
        {2016, "ITMO"},
        {2017, "ITMO"},
        {2018, "SPbSU"},
        {2019, "ITMO"}
    };

    cout << winner[y] << '\n';
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
