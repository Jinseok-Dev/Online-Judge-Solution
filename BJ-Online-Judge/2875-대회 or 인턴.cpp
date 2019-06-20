#include <iostream>
using namespace std;

int main()
{
	int N, M, K, cnt;
	cin >> N >> M >> K;
	cnt = M < N / 2 ? M : N / 2;
	K -= (M - cnt) + (N - cnt * 2);
	while (K > 0)
	{
		K -= 3;
		cnt--;
	}
	cout << cnt << endl;
	return 0;
}