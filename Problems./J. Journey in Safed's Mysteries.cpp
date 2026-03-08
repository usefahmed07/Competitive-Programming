#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    deque<char> dq;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            dq.push_back(s[i]);
        else
            dq.push_front(s[i]);
    }

    string name;
    for (char c : dq) name += c;

    cout << name << endl;

    for (char c : t) {
        if (c == '/')
            cout << '/';
        else
            cout << (c - 'A');
    }

    cout << endl;
}
