#include <iostream>
using namespace std;

int main()
{
	int N, a;
	int d[10] = { 0, };
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int cnt = -1;
		cin >> a;
		for (int j = 0; j < N; j++)
		{
			if (d[j] == 0)
			{
				cnt++;
			}
			if (cnt == a)
			{
				d[j] = i + 1;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (i != 0)
		{
			cout << " ";
		}
		cout << d[i];
	}
	cout << endl;
	return 0;
}