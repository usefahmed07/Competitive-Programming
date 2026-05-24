#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    ll k;
    cin >> n >> k;
 
    vector<ll> a(n);
 
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
 
        a[i] = ((x % k) + k) % k;
    }
 
    sort(a.rbegin(), a.rend());
 
    ll mohamed = 0, kero = 0;
 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            mohamed += a[i];
        else
            kero += a[i];
    }
 
    cout << (mohamed > kero ? "YES" : "NO") << '\n';
 
    return 0;
}
