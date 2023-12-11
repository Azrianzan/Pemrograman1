baris, kolom = input("").split()
baris = int(baris)
kolom = int(kolom)
index = 0
myList = list(map(int, input().split()))

for i in range(baris):
    for j in range(kolom):
        print(myList[index], end=" ")
        index = index + 1
    print()