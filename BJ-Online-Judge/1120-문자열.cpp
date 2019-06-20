#include <iostream>
using namespace std;

int main()
{
	string n, m;
	int n_len, m_len, min = 50;
	cin >> n >> m;
	n_len = n.length();
	m_len = m.length();
	for (int i = 0; i <= m_len - n_len; i++)
	{
		int diff = 0;
		for (int j = 0; j < n_len; j++)
		{
			if (n[j] != m[i + j])
			{
				diff++;
			}
		}
		if (diff < min)
		{
			min = diff;
		}
	}
	cout << min << endl;
	return 0;
}