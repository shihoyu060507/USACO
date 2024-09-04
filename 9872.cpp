#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int N;
int ans, tmp;
string s[1001][3];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s[i][0] >> s[i][1] >> s[i][2];
		sort(s[i], s[i] + 3);
	}

	for (int i = 0; i < N; i++)
	{
		tmp = 0;
		for (int j = 0; j < N; j++)
		{
			if (s[i][0] == s[j][0] &&
				s[i][1] == s[j][1] &&
				s[i][2] == s[j][2]) tmp++;

			ans = max(ans, tmp);
		}
	}

	cout << ans;

}
