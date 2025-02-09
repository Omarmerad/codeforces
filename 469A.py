n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
nums = [0] * (n+1)

for i in range(1, x[0]+1):
    nums[x[i]] = 1
for j in range(1,y[0]+1):
    nums[y[j]] = 1
for i in range(1,n+1):
    if nums[i] == 0:
        print("Oh, my keyboard!")
        exit()

print("I become the guy.")
