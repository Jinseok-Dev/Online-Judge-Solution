#include<iostream>

using namespace std;

int parent[100001];
int weight[100001];

int find(int x, int& w)
{
	while (x != parent[x])
	{
		w += weight[x];
		x = parent[x];
	}
	return x;
}

void update(int x, int p, int w)
{
	while (x != p)
	{
		int x_p = parent[x], x_w = weight[x];
		parent[x] = p;
		weight[x] = w;
		w -= x_w;
		x = x_p;
	}
}

void unite(int x, int y, int w)
{
	int x_p, y_p, x_w, y_w;
	x_w = y_w = 0;
	x_p = find(x, x_w);
	y_p = find(y, y_w);
	update(x, y_p, w + y_w);
}

void print_result(int x, int y)
{
	int x_p, y_p, x_w, y_w;
	x_w = y_w = 0;
	x_p = find(x, x_w);
	y_p = find(y, y_w);
	update(x, x_p, x_w);
	update(y, y_p, y_w);
	if (x_p != y_p)
		cout << " UNKNOWN";
	else
		cout << " " << weight[x] - weight[y];
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cout << "#" << test_case;
		int N, M, a, b, w;
		char ch;
		cin >> N >> M;
		for (int i = 0; i <= N; i++)
		{
			weight[i] = 0;
			parent[i] = i;
		}
		for (int i = 0; i < M; i++)
		{
			cin >> ch >> a >> b;
			if (ch == '!')
			{
				cin >> w;
				unite(a, b, w);
			}
			else
			{
				print_result(a, b);
			}
		}
		cout << endl;
	}
	return 0;
}