T = int(input())
for i in range(T):
    N = input()
    win = False
    while len(N) > 1:
        N = str(int(N[0]) + int(N[1])) + N[2:]
        win = not win
    winner = 'A' if win else 'B'
    print('#{} {}'.format(i + 1, winner))
