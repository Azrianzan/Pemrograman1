angka = int(input(""))

for i in range(1, angka+1):
    if i % 2 == 1:
        print(i, end=" ")

print("")

for j in range(angka, 1, -1):
    if j % 2 == 0:
        print(j, end=" ")