#include <iostream>
using namespace std;

int cnt[50][4] = { 0, };
string str[1000];

char get_dna(int arr[4])
{
	int max = -1, idx = -1;
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}
	switch (idx)
	{
	case 0:
		return 'A';
	case 1:
		return 'C';
	case 2:
		return 'G';
	case 3:
		return 'T';
	default:
		break;
	}
	return 0;
}

int main()
{
	int N, M, diff = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
		for (int j = 0; j < M; j++)
		{
			switch (str[i][j])
			{
			case 'A':
				cnt[j][0]++;
				break;
			case 'C':
				cnt[j][1]++;
				break;
			case 'G':
				cnt[j][2]++;
				break;
			case 'T':
				cnt[j][3]++;
				break;
			default:
				break;
			}
		}
	}
	for (int i = 0; i < M; i++)
	{
		char ch = get_dna(cnt[i]);
		for (int j = 0; j < N; j++)
		{
			if (ch != str[j][i])
			{
				diff++;
			}
		}
		cout << ch;
	}
	cout << endl <<  diff << endl;
	return 0;
}