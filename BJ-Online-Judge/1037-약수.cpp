#include <iostream>
using namespace std;

int main()
{
	int N, a, min = 1000001, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	cout << min * max << endl;
	return 0;
}