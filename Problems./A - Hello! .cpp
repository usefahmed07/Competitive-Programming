#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    string target = "hola";
    sort(target.begin(), target.end()); // ahlo

    while (T--) {
        string s;
        cin >> s;

        if (s.size() != 4) {
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());

        if (s == target)
            cout << "SI\n";
        else
            cout << "NO\n";
    }

    return 0;
}
