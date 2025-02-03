n = int(input())
s = input().lower()

found = [0] * 26
for x in s:
    found[ord(x)-97] = 1
    
if sum(found) == 26:
    print("YES")
else:
    print("NO")




        

