while True:
    s = input()
    ans = True
    if s == '*':
        break
    a = list(s)
    f = a[0]
    first = f.upper()
    for i, v in enumerate(a):
        if a[i] == ' ':
            c = a[i+1].upper()
            if c != first:
                ans = False
    if ans:
        print('Y')
    else:
        print('N')
