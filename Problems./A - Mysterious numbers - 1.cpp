#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a1, a2;
    cin >> a1 >> a2;

    string s = to_string(a2);
    reverse(s.begin(), s.end());

    long long rev = stoll(s);
    cout << a1 + rev << '\n';

    return 0;
}
