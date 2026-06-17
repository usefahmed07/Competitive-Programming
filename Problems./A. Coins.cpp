#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
 
    while (t--) {
        long long a, b, c, n; cin >> a >> b >> c >> n;
 
        long long use100 = min(c, n / 100);
        n -= use100 * 100;
 
        long long use10 = min(b, n / 10);
        n -= use10 * 10;
 
        cout << (n <= a ? "YES" : "NO") << '\n';
    }
}
