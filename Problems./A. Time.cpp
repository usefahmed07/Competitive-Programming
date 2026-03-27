#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int h1, m1, s1;
        int h2, m2, s2;

        cin >> h1 >> m1 >> s1;
        cin >> h2 >> m2 >> s2;

        int t1 = h1 * 3600 + m1 * 60 + s1;
        int t2 = h2 * 3600 + m2 * 60 + s2;

        cout << "Case " << i << ": ";
        if (t1 == t2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
