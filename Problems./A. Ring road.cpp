#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    map<pair<int,int>, int> cost;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back(b);
        adj[b].push_back(a);

        cost[{a, b}] = 0;
        cost[{b, a}] = c;
    }

    vector<int> cycle;
    cycle.push_back(1);

    int prev = 0;
    int cur = 1;

    while (true) {
        int nxt;

        if (adj[cur][0] != prev)
            nxt = adj[cur][0];
        else
            nxt = adj[cur][1];

        if (nxt == 1) break;

        cycle.push_back(nxt);
        prev = cur;
        cur = nxt;
    }

    long long cost1 = 0;

    int m = cycle.size();

    for (int i = 0; i < m; i++) {
        int u = cycle[i];
        int v = cycle[(i + 1) % m];

        cost1 += cost[{u, v}];
    }

    long long total = 0;

    for (auto &[p, w] : cost) {
        if (w > 0) total += w;
    }

    cout << min(cost1, total - cost1) << '\n';
}
