#include <bits/stdc++.h>
using namespace std;

int N, M;
int mapHeight[500][500];
int dp[500][500];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int dfs(int x, int y) {
    if (x == N - 1 && y == M - 1)
        return 1;

    if (dp[x][y] != -1)
        return dp[x][y];

    dp[x][y] = 0;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M && mapHeight[nx][ny] < mapHeight[x][y]) {
            dp[x][y] += dfs(nx, ny);
        }
    }

    return dp[x][y];
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> mapHeight[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << dfs(0, 0) << endl;

    return 0;
}
