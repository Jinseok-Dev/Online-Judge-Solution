#include<iostream>

using namespace std;

int i2a(char ch)
{
	int w = ch - 'a';
	if (w < 15)
		return int(w / 3) + 2;
	else if (w < 19)
		return 7;
	else if (w < 22)
		return 8;
	return 9;
}

bool test(string word, string s)
{
	int len = word.length();
	if (s.length() != len)
		return false;
	for (int i = 0; i < len; i++)
		if (i2a(word[i]) != s[i] - '0')
			return false;
	return true;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string S, word;
		int N, cnt = 0;
		cin >> S >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> word;
			if (test(word, S))
			{
				cnt++;
			}
		}
		cout << "#" << test_case << " " << cnt << endl;
	}
	return 0;
}