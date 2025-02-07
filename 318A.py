n = list(map(int, input().split()))

odd = (n[0] + 1) // 2

if n[1] <= odd:
    print((n[1]*2) - 1)
else:
    print((n[1]-odd)*2)
