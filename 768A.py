n = int(input())
stewards = list(map(int, input().split()))
minimum = min(stewards)
maximum = max(stewards)
count = 0 
if n < 3:
    print(0)
    exit()
for num in stewards:
    if maximum > num > minimum:
            count += 1

print(count)


