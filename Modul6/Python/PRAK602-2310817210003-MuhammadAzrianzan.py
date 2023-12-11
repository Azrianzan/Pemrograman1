ruangan = int(input(""))
list1 = list(map(int, input().split()))
list2 = []

for i in range(ruangan):
    zetsu = list1[i] * (i + 1)
    list2.append(zetsu)

for j in range(ruangan):
    print(list2[j], end=" ")