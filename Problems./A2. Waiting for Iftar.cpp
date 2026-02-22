    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        int T;
        cin >> T;
     
        while (T--) {
            int n;
            cin >> n;
     
            vector<string> grid(n);
            for (int i = 0; i < n; i++) {
                cin >> grid[i];
            }
     
            if (n == 1) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
     
        return 0;
    }
