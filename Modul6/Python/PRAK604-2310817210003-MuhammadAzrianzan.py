pesan1 = input("")
pesan2 = input("")
count1 = 0
count2 = 0
for i in range(len(pesan1)):
    count1 = count1 + 1
for j in range(len(pesan2)):
    count2 = count2 + 1

if count1 == count2:
    bintang = 0
    pagar = 0
    for x in range(count1):
        if pesan1[x] == " " and pesan2[x] == " ":
            print(" ", end="")
        elif pesan1[x] == pesan2[x]:
            print("*", end="")
            bintang = bintang + 1
        elif pesan1[x] != pesan2[x]:
            print("#", end="")
            pagar = pagar + 1
    print()
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")