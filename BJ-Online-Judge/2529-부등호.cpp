#include <iostream>
using namespace std;

string s;
int min_ans[10], max_ans[10];
int N;

bool valid(int ans[10], int x, int idx)
{
	for (int i = 0; i < idx; i++)
		if (x == ans[i])
			return false;
	return true;
}

bool min_solve(int idx)
{
	if (idx == N + 1)
		return true;
	int begin, end;
	if (idx == 0)
	{
		begin = 0;
		end = 9;
	}
	else if (s[idx - 1] == '<')
	{
		begin = min_ans[idx - 1] + 1;
		end = 9;
	}
	else
	{
		begin = 0;
		end = min_ans[idx - 1] - 1;
	}

	for (int i = begin; i <= end; i++)
	{
		if (!valid(min_ans, i, idx))
			continue;
		min_ans[idx] = i;
		if(min_solve(idx + 1))
		{
			return true;
		}
		else
		{
			min_ans[idx] = -1;
		}
	}
	return false;
}

bool max_solve(int idx)
{
	if (idx == N + 1)
		return true;
	int begin, end;
	if (idx == 0)
	{
		begin = 9;
		end = 0;
	}
	else if (s[idx - 1] == '<')
	{
		begin = 9;
		end = max_ans[idx - 1] + 1;
	}
	else
	{
		begin = max_ans[idx - 1] - 1;
		end = 0;
	}

	for (int i = begin; i >= end; i--)
	{
		if (!valid(max_ans, i, idx))
			continue;
		max_ans[idx] = i;
		if (max_solve(idx + 1))
		{
			return true;
		}
		else
		{
			max_ans[idx] = -1;
		}
	}
	return false;
}

int main()
{
	char ch;
	int max = 0;
	cin >> N;
	min_ans[N] = -1;
	max_ans[N] = -1;
	for (int i = 0; i < N; i++)
	{
		cin >> ch;
		s += ch;
		min_ans[i] = -1;
		max_ans[i] = -1;
	}
	max_solve(0);
	min_solve(0);
	for (int i = 0; i < N + 1; i++)
	{
		cout << max_ans[i];
	}
	cout << endl;
	for (int i = 0; i < N + 1; i++)
	{
		cout << min_ans[i];
	}
	cout << endl;
	return 0;
}