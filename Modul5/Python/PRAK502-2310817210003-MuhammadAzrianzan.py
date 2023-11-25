def mutlak(nilai):
    if nilai < 0:
        nilaiMutlak = -(nilai)
        return nilaiMutlak
    else:
        return nilai

def hitung(nilai1, nilai2):
    hasilHitung = nilai1 - nilai2
    return mutlak(hasilHitung)

a, c, b, d = input("").split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
Hasil = hitung(a,b) + hitung(c,d)
print(mutlak(Hasil))