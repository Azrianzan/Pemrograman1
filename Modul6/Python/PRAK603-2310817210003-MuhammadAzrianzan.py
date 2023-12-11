n1, n2 = input("").split()
n1 = int(n1)
n2 = int (n2)
if n1 == n2:
    inputan = 2 * n1
    myList = list(map(int, input().split()))
    myList2 = []
    for i in range(n1):
        hasil = myList[i] * myList[n2]
        n2 = n2 + 1
        myList2.append(hasil)
    for j in range(n1):
        print(myList2[j], end=" ")
else:
    print("Jumlah tidak sama")