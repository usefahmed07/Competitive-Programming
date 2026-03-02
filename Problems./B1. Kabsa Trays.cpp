#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n < 11){
            cout << "NO\n";
            continue;
        }

        bool ok = false;
        long long m = n - 11;

        for(long long b = 0; b * 7 <= m; b++){
            if((m - 7*b) % 4 == 0){
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
