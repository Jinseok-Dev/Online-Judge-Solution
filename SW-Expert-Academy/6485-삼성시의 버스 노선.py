T = int(input())
for i in range(T):
    AB = []
    res = []
    N = int(input())
    for j in range(N):
        AB.append([int(k) for k in input().split()])
    P = int(input())
    for j in range(P):
        C = int(input())
        C_num = 0
        for ab in AB:
            if ab[0] <= C <= ab[1]:
                C_num += 1
        res.append(str(C_num))
    print('#{} '.format(i + 1) + ' '.join(res))
