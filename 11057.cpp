#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;

int main() {
    int n;
    cin >> n;

    vector<vector<long>> d(n + 1, vector<long>(10, 0));

    for (int i = 0; i <= 9; i++) {
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= j; k++) {
                d[i][j] += d[i - 1][k];
                d[i][j] %= MOD;
            }
        }
    }

    long sum = 0;
    for (int i = 0; i <= 9; i++) {
        sum += d[n][i];
        sum %= MOD;
    }

    cout << sum << "\n";

    return 0;
}
