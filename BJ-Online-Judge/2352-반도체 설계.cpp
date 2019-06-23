#include <iostream>
using namespace std;

int a[40000];

int main()
{
	int N, p, len = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> p;
		for (int j = 0; j < len + 1; j++)
		{
			if (j == len)
			{
				a[j] = p;
				len++;
				break;
			}
			if (p <= a[j])
			{
				a[j] = p;
				break;
			}
		}
	}
	cout << len;
	return 0;
}