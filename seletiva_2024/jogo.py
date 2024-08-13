n = int(input())
for _ in range(n):
    s = input()
    l = s[1]
    if (int(s[2]) == int(s[0])):
        ans = int(s[2]) * int(s[0])
        print(ans)
    elif l.isupper():
        ans = int(s[2]) - int(s[0])
        print(ans)
    else:
        ans = int(s[2]) + int(s[0])
        print(ans)
