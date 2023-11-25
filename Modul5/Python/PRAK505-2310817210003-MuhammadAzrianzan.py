def Biodata(tahunLhr, nama, kota):
    tahun_sekarang = 2023
    print(f"\nPerkenalkan Nama Saya: {nama}")
    print(f"Umur Saya: {tahun_sekarang - tahunLhr}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {kota}")

tahunLahir = int(input())
Namaku = str(input())
Asal = str(input())
Biodata(tahunLahir, Namaku, Asal)