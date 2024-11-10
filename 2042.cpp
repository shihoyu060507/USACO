#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1000001;
ll tree[MAX * 4];
ll arr[MAX];

void update(int node, int start, int end, int idx, ll val) {
    if (start == end) {
        tree[node] = val;
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid)
            update(node * 2, start, mid, idx, val);
        else
            update(node * 2 + 1, mid + 1, end, idx, val);
        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }
}

ll query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) return 0;
    if (l <= start && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return query(node * 2, start, mid, l, r) + query(node * 2 + 1, mid + 1, end, l, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, K;
    cin >> N >> M >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> arr[i];
        update(1, 1, N, i, arr[i]);
    }

    for (int i = 0; i < M + K; ++i) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        if (a == 1) {
            update(1, 1, N, b, c);
        } else {
            cout << query(1, 1, N, b, c) << '\n';
        }
    }

    return 0;
}
