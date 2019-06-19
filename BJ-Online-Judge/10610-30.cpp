#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string N;
	int len, n, sum = 0;
	cin >> N;
	vector<int> a;
	len = N.length();
	for (int i = 0; i < len; i++)
	{
		n = N[i] - '0';
		sum += n;
		a.push_back(n);
	}
	if (sum % 3 != 0)
	{
		cout << -1 << endl;
	}
	else
	{
		sort(a.begin(), a.end());
		if (a[0] != 0)
		{
			cout << -1 << endl;
		}
		else
		{
			for (int i = len - 1; i >= 0; i--)
			{
				cout << a[i];
			}
			cout << endl;
		}
	}
	return 0;
}