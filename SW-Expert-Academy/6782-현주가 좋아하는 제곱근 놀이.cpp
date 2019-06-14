#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long  n, m = 0;
		cin >> n;
		while (n != 2)
		{
			long long sq = sqrt(n);
			if (n != pow(sq, 2))
			{
				long long temp = sq + 1;
				m += temp * temp - n + 1;
				n = temp;
			}
			else
			{
				n = sq;
				m++;
			}
		}
		cout << "#" << test_case << " " << m << endl;
	}
	return 0;
}