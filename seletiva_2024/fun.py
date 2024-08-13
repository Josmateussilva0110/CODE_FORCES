n = int(input())
l = list()
for _ in range(n):
    x, y = input().split(" ")
    x = int(x)
    y = int (y)
    rafa = (3*x)**2 + y**2
    beto = 2*(x**2) + (5*y)**2 
    carlos = -100*x + y**3
    if rafa > beto and rafa > carlos:
        print('Rafael ganhou')
    elif beto > rafa and beto > carlos:
        print('Beto ganhou')
    elif carlos > rafa and carlos > beto:
        print('Carlos ganhou')
