#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class MaximumFlow {
    struct Edge {
        int to, capacity;
        Edge* rev;
        Edge(int to, int capacity) : to(to), capacity(capacity), rev(nullptr) {}
    };

    int n, source, sink;
    vector<vector<Edge*>> graph;
    vector<bool> check;

public:
    MaximumFlow(int n, int source, int sink) : n(n), source(source), sink(sink), graph(n), check(n) {}

    void add_edge(int u, int v, int cap) {
        Edge* ori = new Edge(v, cap);
        Edge* rev = new Edge(u, 0);
        ori->rev = rev;
        rev->rev = ori;
        graph[u].push_back(ori);
        graph[v].push_back(rev);
    }

    void add_edge_from_source(int v, int cap) {
        add_edge(source, v, cap);
    }

    void add_edge_to_sink(int u, int cap) {
        add_edge(u, sink, cap);
    }

    int bfs() {
        vector<int> from1(n, -1), from2(n, -1);
        fill(check.begin(), check.end(), false);
        queue<int> q;
        q.push(source);
        check[source] = true;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            for (int i = 0; i < graph[x].size(); i++) {
                Edge* e = graph[x][i];
                if (e->capacity > 0 && !check[e->to]) {
                    q.push(e->to);
                    check[e->to] = true;
                    from1[e->to] = x;
                    from2[e->to] = i;
                }
            }
        }
        if (!check[sink]) return 0;

        int x = sink, c = graph[from1[x]][from2[x]]->capacity;
        while (from1[x] != -1) {
            if (c > graph[from1[x]][from2[x]]->capacity) {
                c = graph[from1[x]][from2[x]]->capacity;
            }
            x = from1[x];
        }
        x = sink;
        while (from1[x] != -1) {
            Edge* e = graph[from1[x]][from2[x]];
            e->capacity -= c;
            e->rev->capacity += c;
            x = from1[x];
        }
        return c;
    }

    int flow() {
        int ans = 0;
        while (true) {
            int f = bfs();
            if (f == 0) break;
            ans += f;
        }
        return ans;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    MaximumFlow mf(n + m + 2, n + m, n + m + 1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mf.add_edge_to_sink(m + i, x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        mf.add_edge_from_source(i, x);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            mf.add_edge(i, j + m, x);
        }
    }
    cout << mf.flow() << endl;
    return 0;
}
