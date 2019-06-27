#include <iostream>
using namespace std;

int t[20][20];

int main()
{
	int N, res = 0;
	cin >> N ;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> t[i][j];
		}
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			int min = 10001;
			for (int k = 0; k < N; k++)
			{
				if (k != i && k != j && min > t[i][k] + t[k][j])
				{
					min = t[i][k] + t[k][j];
				}
			}
			if (t[i][j] < min)
			{
				res += t[i][j];
			}
			else if(t[i][j] > min)
			{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << res << endl;
	return 0;
}