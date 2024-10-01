#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> paper(101, vector<int>(101, 0));

int calculate_area(int x, int y, int h, int w) {
    int cnt = 0;
    for (int i = x; i <= h; i++) {
        for (int j = y; j <= w; j++) {
            if (paper[i][j] == 0) {
                return 0;
            }
            cnt++;
        }
    }
    return cnt;
}

int find_rectangle(int x, int y) {
    int max_size = 100;
    for (int i = 0; i < 100; i++) {
        if (x + i > 100) break;
        for (int j = 0; j < 100; j++) {
            if (y + j > 100) break;
            max_size = max(max_size, calculate_area(x, y, x + i, y + j));
        }
    }
    return max_size;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int xi = x; xi < x + 10; xi++) {
            for (int yi = y; yi < y + 10; yi++) {
                paper[xi][yi] = 1;
            }
        }
    }

    int max_size = 100;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                max_size = max(max_size, find_rectangle(i, j));
            }
        }
    }

    cout << max_size << "\n";
    return 0;
}
