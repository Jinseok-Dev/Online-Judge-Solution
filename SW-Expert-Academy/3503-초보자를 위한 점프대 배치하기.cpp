#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, t, max = 0;
		vector<int> v;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> t;
			v.push_back(t);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < N - 2; i++)
		{
			if (v[i + 2] - v[i] > max)
				max = v[i + 2] - v[i];
		}
		if (v[1] - v[0] > max)
			max = v[1] - v[0];
		if (v[N - 1] - v[N - 2] > max)
			max = v[N - 1] - v[N - 2];
		cout << "#" << test_case << " " << max << endl;
	}
	return 0;
}