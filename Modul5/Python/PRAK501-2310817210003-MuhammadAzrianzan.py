def MaxBilangan(a, b, c, d):
    if a > b:
        if a > c:
            if a > d:
                return a
            else:
                return d
        else:
            if c > d:
                return c
            else:
                return d
    else:
        if b > c:
            if b > d:
                return b
            else:
                return d
        else:
            if c > d:
                return c
            else:
                return d

a, b, c, d = input("").split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
hasil = MaxBilangan(a, b, c, d)
print(hasil)