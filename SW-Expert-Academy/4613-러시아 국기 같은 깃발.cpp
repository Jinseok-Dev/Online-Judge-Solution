#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M, min = 3000, cnt[50][3] = { 0, };
		char data[50][51];
		cin >> N >> M;
		for (int i = 0; i < N; i++)
		{
			cin >> data[i];
			for (int j = 0; j < M; j++)
			{
				if (data[i][j] == 'W')
				{
					cnt[i][1]++;
					cnt[i][2]++;
				}
				else if (data[i][j] == 'B')
				{
					cnt[i][0]++;
					cnt[i][2]++;
				}
				else
				{
					cnt[i][0]++;
					cnt[i][1]++;
				}
			}
		}

		for (int i = 0; i < N - 2; i++)
		{
			for (int j = i + 1; j < N - 1; j++)
			{
				int sum = 0, k = 0;
				for (; k <= i; k++)
				{
					sum += cnt[k][0];
				}
				for (; k <= j; k++)
				{
					sum += cnt[k][1];
				}
				for (; k < N; k++)
				{
					sum += cnt[k][2];
				}
				if (sum < min)
					min = sum;
			}
		}
		cout << "#" << test_case << " " << min << endl;
	}
	return 0;
}