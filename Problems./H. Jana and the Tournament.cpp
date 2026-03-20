#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
        } else if (n % 2 == 0) {
            cout << n << '\n';
        } else {
            cout << n - 1 << '\n';
        }
    }
}
