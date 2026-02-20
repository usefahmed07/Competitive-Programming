
        // 0. First green !!
        // URL: https://codeforces.com/group/MEqF8b6wBT/contest/673206/problem/0
        // Time: 2/21/2026, 00:36:31 
        #include <bits/stdc++.h>
        using namespace std;
        #define int         long long
        #define int long long
        #define vi          vector<int>
        #define pii         pair<int, int>
        #define all(v)      v.begin(), v.end()
        #define finish(s)   { cout << s << "\n"; return; }
        template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
        template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
        void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
        void UseFile() { freopen("file.in", "r", stdin); freopen("file.out", "w", stdout); }
        const int MOD = 1000000007, INF = 2e18;
        void solve() {
        int n; cin >> n;
        if (n == 1){
            cout <<"Easy"<<"\n";
        }
        else if (n == 2){
            cout <<"Easy+"<<"\n";
        }
        else if (n == 3){
            cout <<"Mid"<<"\n";
        }
        else if (n == 4){
            cout <<"Mid+"<<"\n";
        }
        else if (n == 5){
            cout <<"Hard"<<"\n";
        }
        else {
            cout <<"Hard+"<<"\n";
        }
    }
        signed main() {
        ios::sync_with_stdio(false); cin.tie(NULL);
            solve();
        }
