#include <bits/stdc++.h>
using namespace std;
int main() {
	int Tn[45] = { 0 };
	for (int i = 1; i < 45; i++) Tn[i] = i*(i + 1) / 2;

	int T, K;
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> K;
		int finish = 0;
		for (int i = 1; i < 45; i++) {
			if (Tn[i] >= K) break;

			for (int j = 1; j < 45; j++) {
				if (Tn[j] >= K - Tn[i]) break;

				for (int k = 1; k < 45; k++) {
					if (Tn[k] > K - Tn[i] - Tn[j]) break;
					else if (Tn[k] + Tn[j] + Tn[i] == K) {
						cout << "1\n";
						finish = 1;
						break;
					}
				}
				if (finish == 1) break;
			}
			if (finish == 1) break;
		}
		if (finish == 0) cout << "0\n";
	}
	return 0;
}
