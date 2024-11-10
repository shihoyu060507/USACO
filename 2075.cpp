#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> pq;

	int a;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (pq.size() > N) {
				pq.pop();
			}
			cin >> a;
			pq.push(a);
		}
	}

	do{
		pq.pop();
	} while (pq.size() == N + 1);

	cout << pq.top();

	return 0;
}
