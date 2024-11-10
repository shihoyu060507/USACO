#include <iostream>
#include <algorithm>
using namespace std;

int vote[1000];

int main() {
	int count = 0;
	int candidate;
	int dasom;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> candidate;
	cin >> dasom;

	for (int i = 0; i < candidate - 1; i++) {
		cin >> vote[i];
	}

	while (true) {
		int find_max = 0;
		int index = 0;

		// 가장 큰 값 찾기
		for (int i = 0; i < candidate - 1; i++) {
			if (find_max < vote[i]) {
				find_max = vote[i];
				index = i;
			}
		}
		// 찾은 값이 다솜이의 표수보다 적다면 출력
		if (dasom > find_max) {
			cout << count << "\n";
			break;
		 }
		// 찾은 값이 다솜이의 표수보다 많다면 뺏어옴
		dasom++;
		vote[index]--;
		count++;
	}

}
