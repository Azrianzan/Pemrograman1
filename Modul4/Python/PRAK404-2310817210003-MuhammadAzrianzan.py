while True:
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))
    if pilihan == 5:
        NAMAANDA = "Muhammad Azrianzan"
        print(f"Terimakasih, telah menggunakan kalkulator {NAMAANDA}")
        print("")
        break
    elif pilihan == 1:
        nilaiPertama = int(input("Masukkan nilai pertama : "))
        nilaiPertama = float(nilaiPertama)
        nilaiKedua = int(input("Masukkan nilai kedua : "))
        nilaiKedua = float(nilaiKedua)
        hasil = nilaiPertama + nilaiKedua
        print(f"Hasil penjumlahan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        print("")
    elif pilihan == 2:
        nilaiPertama = int(input("Masukkan nilai pertama : "))
        nilaiPertama = float(nilaiPertama)
        nilaiKedua = int(input("Masukkan nilai kedua : "))
        nilaiKedua = float(nilaiKedua)
        hasil = nilaiPertama - nilaiKedua
        print(f"Hasil pengurangan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        print("")
    elif pilihan == 3:
        nilaiPertama = int(input("Masukkan nilai pertama : "))
        nilaiPertama = float(nilaiPertama)
        nilaiKedua = int(input("Masukkan nilai kedua : "))
        nilaiKedua = float(nilaiKedua)
        hasil = nilaiPertama * nilaiKedua
        print(f"Hasil pengalian antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        print("")
    elif pilihan == 4:
        nilaiPertama = int(input("Masukkan nilai pertama : "))
        nilaiPertama = float(nilaiPertama)
        nilaiKedua = int(input("Masukkan nilai kedua : "))
        nilaiKedua = float(nilaiKedua)
        hasil = nilaiPertama / nilaiKedua
        print(f"Hasil pengurangan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        print("")
    else:
        print("Input anda salah, silahkan coba lagi")
        print("")