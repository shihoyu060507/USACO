#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, ans = 0, k = 0, o = 0;
	int km, kmh, now = 0;
	vector<pair<int, int>> road, w;
	scanf("%d %d", &n, &m);

	scanf("%d %d", &km, &kmh);
	road.push_back(make_pair(km, kmh));
	for (int i = 1; i < n; i++) {
		scanf("%d %d", &km, &kmh);
		road.push_back(make_pair(road[i-1].first + km, kmh));
	}
	scanf("%d %d", &km, &kmh);
	w.push_back(make_pair(km, kmh));
	for (int i = 1; i < m; i++) {
		scanf("%d %d", &km, &kmh);
		w.push_back(make_pair(w[i-1].first + km, kmh));
	}

	for (int i = 1; i <= 100; i++) {
		if (road[k].second < w[o].second && w[o].second - road[k].second > ans) {
			ans = w[o].second - road[k].second;
		}
		if (i == 100) break;
		if (w[o].first == i) o++;
		if (road[k].first == i) k++;
	}
	printf("%d\n", ans);
	return 0;
}
