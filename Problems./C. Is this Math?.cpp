// C. Is this Math?
// URL: https://codeforces.com/group/Rilx5irOux/contest/564405/problem/C
// Time: 3/4/2026, 01:17:42 PM
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
// fixed << setprecision()
const string IN = "input.txt", OUT = "output.txt";
#define FIn cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define file freopen("promote.in", "r", stdin); freopen("promote.out", "w", stdout)
#define OJudge(in,out) freopen(in, "r", stdin); freopen(out, "w", stdout)

void Usif() {
    int t; cin >> t;
    while (t--){
        int a , n; cin >> a >> n;
        if (a * (n/a) == (a*n) / a){
            cout <<"Yes"<<"\n";
        }
        else {
            cout <<"No"<<"\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    Usif();
    return 0;
}
