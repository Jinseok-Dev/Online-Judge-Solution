#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, L, end = 0, res = 0;
	cin >> N >> L;
	vector<int> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < N; i++)
	{
		if (a[i] <= end)
		{
			continue;
		}
		else
		{
			res++;
			end = a[i] + L - 1;
		}
	}
	cout << res << endl;
	return 0;
}