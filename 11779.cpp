#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        graph[u].emplace_back(v, c);
    }
    
    int start, end;
    cin >> start >> end;
    
    vector<pair<int, int>> dp(n + 1, {INF, -1});
    dp[start] = {0, start};
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.emplace(0, start);
    
    while (!pq.empty()) {
        int now_cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (now_cost > dp[end].first)
            continue;
        
        for (auto &next : graph[now]) {
            int nxt = next.first;
            int nxt_cost = next.second;
            int cost = now_cost + nxt_cost;
            
            if (dp[nxt].first > cost) {
                dp[nxt] = {cost, now};
                pq.emplace(cost, nxt);
            }
        }
    }
    
    vector<int> route;
    int k = end;
    route.push_back(end);
    
    while (route.back() != start) {
        route.push_back(dp[k].second);
        k = dp[k].second;
    }
    
    cout << dp[end].first << "\n";
    cout << route.size() << "\n";
    reverse(route.begin(), route.end());
    for (int city : route) {
        cout << city << " ";
    }
    cout << "\n";
    
    return 0;
}
