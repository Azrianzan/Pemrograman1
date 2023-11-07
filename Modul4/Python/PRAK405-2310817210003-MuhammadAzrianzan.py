n, m = input("").split()
n = int(n)
m = int(m)
totalHasil = 0
hasilBaris = 0

for i in range(1, n+1):
    for j in range(i, 0, -1):
        if j > 1:
            hasilTunggal = (j * m)
            hasilBaris = hasilBaris + hasilTunggal
            print(f"({j}*{m}) + ", end="")
        elif j == 1:
            hasilTerakhir = (j * m)
            hasilBaris = hasilBaris + hasilTerakhir
            print(f"({j}*{m}) = {hasilBaris}")
            totalHasil = totalHasil + hasilBaris
            hasilBaris = 0
print(f"{totalHasil}")