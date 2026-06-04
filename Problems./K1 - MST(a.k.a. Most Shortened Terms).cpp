#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, p;
        cin >> n >> m >> p;

        string a, b, c;
        cin >> a >> b >> c;

        if (a[0] == 'M' && b[0] == 'S' && c[0] == 'T')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
