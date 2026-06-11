#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int X, Y, Z, T, V;
    cin >> X >> Y >> Z >> T >> V;

    cout << min(X, min(Y * T, Z * V));

    return 0;
}
