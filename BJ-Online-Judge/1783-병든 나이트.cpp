#include <iostream>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	int N, M, res;
	cin >> N >> M;
	if (N == 1)
		res = 1;
	else if (N == 2)
		res = min(4, (M + 1) / 2);
	else if (M < 7)
		res = min(4, M);
	else
		res = M - 2;
	cout << res << endl;
	return 0;
}