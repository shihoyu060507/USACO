#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> matrices(N);
    for (int i = 0; i < N; i++) {
        int r, c;
        cin >> r >> c;
        matrices[i] = {r, c};
    }
    
    vector<vector<int>> dp(N, vector<int>(N, INF));
    
    for (int i = 0; i < N; i++) {
        dp[i][i] = 0;
    }
    
    for (int len = 2; len <= N; len++) {
        for (int i = 0; i <= N - len; i++) {
            int j = i + len - 1;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k+1][j] + matrices[i].first * matrices[k].second * matrices[j].second;
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << dp[0][N-1] << endl;

    return 0;
}
