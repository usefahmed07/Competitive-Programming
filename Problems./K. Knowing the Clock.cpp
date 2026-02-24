// K. Knowing the Clock
// URL: https://codeforces.com/gym/106160/problem/K
// Time: 2/24/2026, 03:27:42 PM
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
   ll h,m; cin >> h >> m;
    if ((12 * h) % 360 == m){
    cout <<"yes"<<"\n";
   }
   else {
    cout <<"no"<<"\n";
   }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    Usif();
    return 0;
}
