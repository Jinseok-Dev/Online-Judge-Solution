#include <iostream>
using namespace std;

int get_sum(string s)
{
	int begin, end, res;
	begin = res = 0;
	while ((end = s.find('+', begin)) != -1)
	{
		res += atoi(s.substr(begin, end - begin).c_str());
		begin = end + 1;
	}
	res += atoi(s.substr(begin).c_str());
	return res;
}

int main()
{
	bool is_first = true;
	int begin, end, res;
	string str;
	cin >> str;

	begin = res = 0;
	while ((end = str.find('-', begin)) != -1)
	{
		if (is_first)
		{
			res = get_sum(str.substr(begin, end - begin));
			is_first = false;
		}
		else
		{
			res -= get_sum(str.substr(begin, end - begin));
		}
		begin = end + 1;
	}
	if (is_first)
	{
		res = get_sum(str.substr(begin));
	}
	else
	{
		res -= get_sum(str.substr(begin));
	}
	cout << res << endl;
	return 0;
}