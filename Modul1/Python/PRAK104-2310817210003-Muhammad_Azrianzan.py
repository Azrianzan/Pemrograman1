sepatuA = 400000
print("Harga sepatu A adalah", sepatuA)
sepatuB = 350000
print("Harga sepatu B adalah", sepatuB)
diskonSepatuA = 0.13
diskonSepatuB = 0.21

potonganHargaSepatuA = sepatuA * diskonSepatuA
potonganHargaSepatuB = sepatuB * diskonSepatuB

sepatuADiskon = int(sepatuA - potonganHargaSepatuA)
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {sepatuADiskon}")
sepatuBDiskon = int(sepatuB - potonganHargaSepatuB)
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {sepatuBDiskon}")