r, tinggi = input("").split()

r = float(r)
tinggi = float(tinggi)

r2 = float(r * r)
volume = float(3.142857 * r2 * tinggi)
luas = float(2 * 3.142857 * r * (r + tinggi))
keliling = float(2 * 3.142857 * r)

print(f"Volume : {volume:.2f}")
print(f"Luas : {luas:.2f}")
print(f"Keliling : {keliling:.2f}")