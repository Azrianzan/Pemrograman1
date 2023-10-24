detik = int(input(""))
menit = 0
jam = 0
hari = 0

while detik > 0:
    if (detik - 60) >= 0:
        detik = detik - 60
        menit = menit + 1
        if menit == 60:
            menit = menit - 60
            jam = jam + 1
            if jam == 24:
                jam = jam - 24
                hari = hari + 1
    else:
        a = detik - 60
        a = abs(a)
        tambahanDetik = 60 - a
        detik = 0
        detik = detik + tambahanDetik
        break

if hari > 0:
    print(f"{hari} hari ", end="")
    if jam > 9:
        print(f"{jam}:", end="")
    elif jam < 10:
        print(f"0{jam}:", end="")
    if menit > 9:
        print(f"{menit}:", end="")
    elif menit < 10:
        print(f"0{menit}:", end="")
    if detik > 9:
        print(f"{detik}")
    elif detik < 10:
        print(f"0{detik}")
else:
    if jam > 9:
        print(f"{jam}:", end="")
    elif jam < 10:
        print(f"0{jam}:", end="")
    if menit > 9:
        print(f"{menit}:", end="")
    elif menit < 10:
        print(f"0{menit}:", end="")
    if detik > 9:
        print(f"{detik}")
    elif detik < 10:
        print(f"0{detik}")