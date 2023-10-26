bilangan = int(input(""))

if bilangan >= 0 and bilangan < 100:
    if bilangan == 0:
        print("Nol")
    elif bilangan > 0 and bilangan < 10:
        print("Satuan")
    elif bilangan > 10 and bilangan < 20:
        print("Belasan")
    elif bilangan == 10 or bilangan >= 20:
        print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")