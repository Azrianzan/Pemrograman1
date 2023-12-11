ordo = int(input(""))
matriksA = []
matriksB = []
matriksAXB = []
print("Matriks A")
for i in range(ordo):
    row = list(map(int, input().split()))[:ordo]
    matriksA.append(row)
print("Matriks B")
for j in range(ordo):
    row = list(map(int, input().split()))[:ordo]
    matriksB.append(row)
for _ in range(ordo):
    matriksAXB.append([0] * ordo)

for a in range(ordo):
    for b in range(ordo):
        for c in range(ordo):
            matriksAXB[a][b] += matriksA[a][c] * matriksB[c][b]
print("Matriks AXB")
for p in range(ordo):
    for q in range(ordo):
        print(matriksAXB[p][q], end=" ")
    print()