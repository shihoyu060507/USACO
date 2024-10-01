#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int grid[N][N];
int paper[6] = {0, 5, 5, 5, 5, 5}; 
int minPapers = INT_MAX;

bool canPlace(int x, int y, int size) {
    if (x + size > N || y + size > N) return false;
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (grid[i][j] == 0) return false;
        }
    }
    return true;
}

void placePaper(int x, int y, int size, int val) {
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            grid[i][j] = val;
        }
    }
}

void solve(int x, int y, int usedPapers) {
    if (x == N) {
        minPapers = min(minPapers, usedPapers);
        return;
    }
    
    if (y == N) {
        solve(x + 1, 0, usedPapers);
        return;
    }
    
    if (grid[x][y] == 0) {
        solve(x, y + 1, usedPapers);
        return;
    }
    
    for (int size = 5; size >= 1; size--) {
        if (paper[size] > 0 && canPlace(x, y, size)) {
            placePaper(x, y, size, 0);
            paper[size]--;
            solve(x, y + size, usedPapers + 1);
            paper[size]++;
            placePaper(x, y, size, 1);
        }
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    
    solve(0, 0, 0);
    
    if (minPapers == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minPapers << endl;
    }
    
    return 0;
}
