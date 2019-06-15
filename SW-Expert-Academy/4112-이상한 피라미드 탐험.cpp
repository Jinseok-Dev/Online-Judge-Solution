#include<iostream>

using namespace std;
int get_level(int n)
{
	int level = 1, m = 1;
	while (n > m)
	{
		m += (++level);
	}
	return level;
}

int run(int a, int b, int a_level, int b_level)
{
	int move = 0;
	while (b_level != a_level)
	{
		int n = b_level - a_level;
		int s1 = a + n * (2 * a_level + (n - 1)) / 2;
		int s2 = a + n * (2 * (a_level + 1) + (n - 1)) / 2;
		s1 = abs(b - s1);
		s2 = abs(b - s2);

		if (s1 == 0 || s2 == 0)
		{
			return move + (b_level - a_level);
		}

		if (s1 < s2)
		{
			a += (a_level++);
		}
		else
		{
			a += (++a_level);
		}
		move++;
	}
	return move + abs(b - a);
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int a, b, a_level, b_level;
		int res;
		cin >> a >> b;
		if (a > b)
		{
			a = a + b;
			b = a - b;
			a = a - b;
		}
		a_level = get_level(a);
		b_level = get_level(b);
		res = run(a, b, a_level, b_level);
		cout << "#" << test_case << " " << res << endl;
	}
	return 0;
}