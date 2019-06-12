#include<iostream>

using namespace std;
int cnt[1000001];

int main(int argc, char** argv)
{
	int test_case;
	int T;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, input,  max = 0, sum = 0;
		for (int i = 0; i <= 1000000; i++)
		{
			cnt[i] = 0;
		}
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> input;
			if (input > max)
			{
				max = input;
			}
			cnt[input]++;
		}
		for (int i = max; i >= 0; i--)
		{
			sum += cnt[i];
			if (sum >= i)
			{
				cout << "#" << test_case << " " << i << endl;
				break;
			}
		}
	}
	return 0;
}