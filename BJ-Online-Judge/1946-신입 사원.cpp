#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Score
{
	int a, b;
}Score;

bool cmp(Score u, Score v)
{
	return u.a < v.a;
}

int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int N, last, cnt = 1;
		cin >> N;
		vector<Score> s(N);
		for (int i = 0; i < N; i++)
		{
			cin >> s[i].a >> s[i].b;
		}
		sort(s.begin(), s.end(), cmp);
		last = s[0].b;
		for (int i = 1; i < N; i++)
		{
			if (s[i].b < last)
			{
				cnt++;
				last = s[i].b;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}