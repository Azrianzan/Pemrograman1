a, b, c = input("").split()
a = int(a)
b = int(b)
c = int(c)

if a > b:
    if b > c:
        print(c, b, a)
    elif b < c and c < a:
        print(b, c, a)
    elif b < c and c > a:
        print(b, a, c)
elif b > a:
    if a > c:
        print(c, a, b)
    elif a < c and c < b:
        print(a, c, b)
    elif a < c and c > b:
        print(a, b, c)