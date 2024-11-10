#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int N, K, V, M, W;
    long long total_price = 0;
    typedef pair<long long, long long> pair;

    cin >> N >> K;

    priority_queue<pair> MV;
    multiset<int> C;

    for (int i = 0; i < N; i++) {
        cin >> M >> V;
        MV.push({ V, M });
    }

    for (int i = 0; i < K; i++) {
        cin >> W;
        C.insert(W);
    }

    while (!MV.empty()) {
        pair current = MV.top();
        MV.pop();
        multiset<int>::iterator iter;
        iter = C.lower_bound(current.second);
        if (iter != C.end()) {
            C.erase(iter);
            total_price += current.first;
        }
        if (C.empty())
            break;
    }

    cout << total_price;

    return 0;
}
