def maksimal(a, b):
    if b > a:
        nilaiMaks = b
    else:
        nilaiMaks = a
    return nilaiMaks

def minimal(a, b):
    if b < a:
        nilaiMinim = b
    else:
        nilaiMinim = a
    return nilaiMinim

batas = 0
maks = -100000
minim = 100000
bilangan = int(input(""))

while batas < bilangan:
    nilai = int(input(""))
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1
print(maks, minim)