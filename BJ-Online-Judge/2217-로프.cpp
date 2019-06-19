#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, max = 0;
	cin >> N;
	vector<int> r(N);
	for (int i = 0; i < N; i++)
	{
		cin >> r[i];
	}
	sort(r.begin(), r.end());
	for (int i = 0; i < N; i++)
	{
		if (r[i] * (N - i) > max)
		{
			max = r[i] * (N - i);
		}
	}
	cout << max << endl;
	return 0;
}