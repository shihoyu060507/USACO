#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, M;
    cin >> n >> M;

    vector<int> memory(n);
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> memory[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    int totalCost = accumulate(cost.begin(), cost.end(), 0);
    vector<int> dp(totalCost + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = totalCost; j >= cost[i]; j--) {
            dp[j] = max(dp[j], dp[j - cost[i]] + memory[i]);
        }
    }

    int result = totalCost;
    for (int i = 0; i <= totalCost; i++) {
        if (dp[i] >= M) {
            result = i;
            break;
        }
    }

    cout << result << "\n";

    return 0;
}
7579
