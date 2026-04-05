// A. Whose sentence is it?
// URL: https://codeforces.com/group/YnciCj8uVi/contest/205343/problem/A
// Date: 4/5/2026
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
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        bool start = false, ending = false;

        if (s.size() >= 5 && s.substr(0, 5) == "miao.")
            start = true;

        if (s.size() >= 5 && s.substr(s.size() - 5) == "lala.")
            ending = true;

        if (start && !ending)
            cout << "Rainbow's\n";
        else if (!start && ending)
            cout << "Freda's\n";
        else
            cout << "OMG>.< I don't know!\n";
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
