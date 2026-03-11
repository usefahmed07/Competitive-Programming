#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        double n, w;
        cin >> n >> w;

        double time = 2 * n * w;

        cout << fixed << setprecision(6) << time << "\n";
    }
}
