#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n);

        int pos = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != -1 && pos == -1)
                pos = i;
        }

        // Fill to the right
        for (int i = pos + 1; i < n; i++) {
            if (a[i] == -1)
                a[i] = (a[i - 1] + 1) % m;
        }

        // Fill to the left
        for (int i = pos - 1; i >= 0; i--) {
            if (a[i] == -1)
                a[i] = (a[i + 1] - 1 + m) % m;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
}
