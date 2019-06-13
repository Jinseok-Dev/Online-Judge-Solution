s = [int(i) for i in input().split()]
print(chr(64 + (s[0] - s[1]) % 3))
