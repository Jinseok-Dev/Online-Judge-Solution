#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int Bag[300000];
pair<int, int> Jew[300000];
priority_queue<int> Q;

int main()
{
	int N, K, idx = 0;
	long long res = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> Jew[i].first >> Jew[i].second;
	}
	for (int i = 0; i < K; i++)
	{
		cin >> Bag[i];
	}
	sort(Jew, Jew + N);
	sort(Bag, Bag + K);
	for (int i = 0; i < K; i++)
	{
		while (idx < N && Jew[idx].first <= Bag[i])
		{
			Q.push(Jew[idx++].second);
		}
		if (!Q.empty())
		{
			res += Q.top();
			Q.pop();
		}
	}
	cout << res << endl;
	return 0;
}