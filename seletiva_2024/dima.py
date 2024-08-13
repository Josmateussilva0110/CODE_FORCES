n = int(input())
for i in range(n):
    cont_a = 0
    cont_b = 0
    s = input()
    for i in s:
        if i == '<':
            cont_a+=1
        elif i == '>':
            cont_b+=1
    ans = min(cont_a, cont_b)
    print(ans)
