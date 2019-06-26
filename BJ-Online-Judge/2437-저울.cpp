#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	vector<int> w(N);
	for (int i = 0; i < N; i++)
	{
		cin >> w[i];
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < N && res + 1 >= w[i]; i++)
	{
		res += w[i];
	}
	cout << res + 1 << endl;
	return 0;
}