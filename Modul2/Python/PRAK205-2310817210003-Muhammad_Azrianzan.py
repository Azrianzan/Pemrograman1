import math

A, B = input("").split()
A = int(A)
B = int(B)

alas = int(math.sqrt(math.pow(B, 2) - math.pow(A, 2)))
tinggi = A
keliling = int(A + B + alas)
luas = int(0.5 * alas * tinggi)

print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")