#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        int last = A % 10;

        if (B == 0) {
            cout << 1 << "\n";
            continue;
        }

        vector<vector<int>> cycles = {
            {0},
            {1},
            {2,4,8,6},
            {3,9,7,1},
            {4,6},
            {5},
            {6},
            {7,9,3,1},
            {8,4,2,6},
            {9,1}
        };

        vector<int> &cycle = cycles[last];
        int len = cycle.size();

        int idx = B % len;
        if (idx == 0) idx = len;

        cout << cycle[idx - 1] << "\n";
    }

    return 0;
}
