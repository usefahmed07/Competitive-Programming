    // A. First Problem
    // URL: https://codeforces.com/gym/102830/problem/A
    // Time: 2/26/2026, 01:36:42 PM
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define el '\n'
    #define all(x) (x).begin(), (x).end()
    #define rall(x) (x).rbegin(), (x).rend()
    // fixed << setprecision()
    const string IN = "input.txt", OUT = "output.txt";
    #define tc(test) ll t = 1; if (test) cin >> t; while (t--) ASAAD()
    #define FIn cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
    #define file freopen("promote.in", "r", stdin); freopen("promote.out", "w", stdout)
    #define OJudge(in,out) freopen(in, "r", stdin); freopen(out, "w", stdout)
    void Usif() {
    ll A, B;
    cin >> A >> B;

    double X = (double)A / B + 37.0;

    cout << fixed << setprecision(3) << X << "\n";
    }
    int main() {
        ios::sync_with_stdio(false); cin.tie(nullptr);
        Usif();
        return 0;
    }
