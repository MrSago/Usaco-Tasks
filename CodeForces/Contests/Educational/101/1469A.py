
t = int(input())
for i in range(0, t):
    s = input()
    if len(s) % 2 == 0 and s[0] != ')' and s[-1] != '(':print("YES")
    else:print("NO")

