#include <iostream>
using namespace std;

int main()
{
	int N, M, p, u, p_min, u_min, m;
	p_min = u_min = 1000;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> p >> u;
		p_min = p < p_min ? p : p_min;
		u_min = u < u_min ? u : u_min;
	}
	if (p_min > u_min * 6)
	{
		m = N * u_min;
	}
	else
	{
		m = (N / 6) * p_min;
		N %= 6;
		if (p_min > u_min * N)
		{
			m += u_min * N;
		}
		else
		{
			m += p_min;
		}
	}
	cout << m << endl;

	return 0;
}