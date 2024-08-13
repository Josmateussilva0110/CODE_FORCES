n = int(input())
open = '>'
close = '<'
for i in range(n):
    s = input()
    a = list(s)
    cont_a = 0
    cont_b = 0
    ans = 0
    for i in a:
        if i == open:
            cont_a+=1
        elif i == close and cont_a > 0:
            ans+=1
            cont_a-=1
    print(ans)
