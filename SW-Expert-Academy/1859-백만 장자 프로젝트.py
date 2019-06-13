T = int(input())
for i in range(T):
    N = int(input())
    P = [int(j) for j in input().split()]
    res = 0
    while N > 0:
        m = max(P)
        idx = P.index(m)
        res += idx * m - sum(P[:idx])
        P = P[idx + 1:]
        N -= (idx + 1)
    print('#{} {}'.format(i + 1, res))
