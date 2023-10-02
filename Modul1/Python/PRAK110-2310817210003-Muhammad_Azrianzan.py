import math

alas = 5
tinggi = 12
print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("")
print("Jawab :")

sisiB = math.sqrt(alas**2 + tinggi**2)

print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {sisiB:.0f} cm")
print(f"Sisi C = {alas} cm")
keliling = alas + tinggi + sisiB
print(f"Keliling = {keliling:.0f} cm")
luas = 0.5 * alas * tinggi
print(f"Luas = {luas:.0f} cm")
