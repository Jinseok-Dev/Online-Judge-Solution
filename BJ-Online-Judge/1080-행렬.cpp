#include <iostream>
using namespace std;

bool A[50][50], B[50][50];

void change(int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[x + i][y + j] = !A[x + i][y + j];
		}
	}
}

int main()
{
	int N, M, t = 0;
	string s;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			A[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			B[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
			if (A[i][j] != B[i][j])
			{
				change(i, j);
				t++;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (A[i][j] != B[i][j])
			{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << t << endl;
	return 0;
}