n = int(input())
a = list(map(int, input().split()))
coins = sorted(a, reverse=True)
sum1 = 0
count = 0
sum2 = sum(coins)
for num in coins:
    sum1 += num
    sum2 -= num
    count += 1
    if sum1 > sum2:
        print(count)
        exit()
