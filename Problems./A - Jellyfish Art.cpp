#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Body
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N - 1; j++) {
            cout << 'J';
        }
        cout << '\n';
    }

    // Tentacles
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << 'S';
            if (j != N - 1) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
