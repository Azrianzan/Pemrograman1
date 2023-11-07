a, b = input("").split()
x = int(a)
y = int(b)
a = int(a)
b = int(b)
if a > b:
    for i in range(a, b-1, -1):
        print(f"{a} {b} - ", end="")
        a = a - 1
        b = b + 1
        if a == y and b == x:
            print(f"{a} {b}")
            break
elif b > a:
    for j in range(b, a-1, -1):
        print(f"{a} {b} - ", end="")
        a = a + 1
        b = b - 1
        if a == y and b == x:
            print(f"{a} {b}")
            break