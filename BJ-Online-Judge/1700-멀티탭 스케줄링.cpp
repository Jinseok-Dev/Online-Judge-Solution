#include <iostream>
using namespace std;

bool use[101];
int n[100];
int tab[100];

int main()
{
	int N, M, res = 0, end = 0;
	int h[100] = { 0, };
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		tab[i] = 0;
		use[i + 1] = false;
	}
	for (int i = 0; i < M; i++)
	{
		cin >> n[i];
	}
	for (int i = 0; i < M; i++)
	{
		if (use[n[i]])
		{
			continue;
		}
		else if (end < N)
		{
			tab[end++] = n[i];
			use[n[i]] = true;
		}
		else
		{
			int max_dist = 0, idx = 0;
			for (int j = 0; j < N; j++)
			{
				int dist = 100;
				for (int k = i + 1; k < M; k++)
				{
					if (n[k] == tab[j])
					{
						dist = k;
						break;
					}
				}
				if (dist > max_dist)
				{
					idx = j;
					max_dist = dist;
				}
			}
			res++;
			use[tab[idx]] = false;
			tab[idx] = n[i];
			use[tab[idx]] = true;
		}
	}
	cout << res << endl;
	return 0;
}