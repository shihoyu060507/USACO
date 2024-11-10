#include <bits/stdc++.h>
using namespace std;

const int INF = 100000;

bool solution(int N, vector<int>& distance, vector<vector<pair<int, int>>>& graph) {
    distance[1] = 0;
    for (int check = 0; check < N; ++check) {
        for (int vertex = 1; vertex <= N; ++vertex) {
            for (auto& edge : graph[vertex]) {
                int next_vertex = edge.first;
                int next_cost = edge.second;
                if (distance[next_vertex] > distance[vertex] + next_cost) {
                    distance[next_vertex] = distance[vertex] + next_cost;
                    if (check == N - 1) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    
    while (TC--) {
        int N, M, W;
        cin >> N >> M >> W;

        vector<vector<pair<int, int>>> graph(N + 1);
        vector<int> distance(N + 1, INF);

        for (int i = 0; i < M; ++i) {
            int S, E, T;
            cin >> S >> E >> T;
            graph[S].emplace_back(E, T);
            graph[E].emplace_back(S, T);
        }

        for (int i = 0; i < W; ++i) {
            int S, E, T;
            cin >> S >> E >> T;
            graph[S].emplace_back(E, -T);
        }

        if (solution(N, distance, graph)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
