from functools import cmp_to_key

def compare(x, y):
    if x + y < y + x:
        return -1
    elif x + y > y + x:
        return 1
    else:
        return 0

def solve(string):
    string.sort(key=cmp_to_key(compare))
    result = ''.join(string)
    return result

size = int(input())
lista = list()
for _ in range(size):
    s = input()
    lista.append(s)
    result = solve(lista)
    print(result)
