#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Meeting
{
	int start, end;
}Meeting;

bool cmp(Meeting u, Meeting v)
{
	if (u.end == v.end) {
		return u.start < v.start;
	}
	else {
		return u.end < v.end;
	}
}

int main()
{
	int N, start, end, now = 0, cnt = 0;
	cin >> N;
	vector<Meeting> mt(N);
	for (int i = 0; i < N; i++)
	{
		cin >> mt[i].start >> mt[i].end;
	}
	sort(mt.begin(), mt.end(), cmp);
	for (int i = 0; i < N; i++)
	{
		if (mt[i].start >= now)
		{
			now = mt[i].end;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}