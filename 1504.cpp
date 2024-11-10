#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int num, len;
    Edge(int num, int len) : num(num), len(len) {}
    bool operator<(const Edge& other) const {
        return len > other.len;
    }
};

int N;
vector<vector<Edge>> adj;
int essential_path[2];
vector<int> dist;
const int INF = 200000 * 1000;

int Dijkstra(int startNode, int endNode) {
    fill(dist.begin(), dist.end(), INF);
    vector<bool> visited(N + 1, false);
    priority_queue<Edge> pq;
    pq.push(Edge(startNode, 0));
    dist[startNode] = 0;

    while (!pq.empty()) {
        Edge cur = pq.top();
        pq.pop();
        if (visited[cur.num]) continue;

        visited[cur.num] = true;
        for (const auto& next : adj[cur.num]) {
            if (dist[next.num] > dist[cur.num] + next.len) {
                dist[next.num] = dist[cur.num] + next.len;
                pq.push(Edge(next.num, dist[next.num]));
            }
        }
    }
    return dist[endNode];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int E;
    cin >> N >> E;
    adj.resize(N + 1);
    dist.resize(N + 1);

    for (int i = 0; i < E; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].emplace_back(b, c);
        adj[b].emplace_back(a, c);
    }

    cin >> essential_path[0] >> essential_path[1];

    int ans1 = 0, ans2 = 0;
    ans1 += Dijkstra(1, essential_path[0]);
    ans1 += Dijkstra(essential_path[0], essential_path[1]);
    ans1 += Dijkstra(essential_path[1], N);

    ans2 += Dijkstra(1, essential_path[1]);
    ans2 += Dijkstra(essential_path[1], essential_path[0]);
    ans2 += Dijkstra(essential_path[0], N);

    int ans = (ans1 >= INF && ans2 >= INF) ? -1 : min(ans1, ans2);
    cout << ans << "\n";

    return 0;
}
