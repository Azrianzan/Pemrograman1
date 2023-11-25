def reverse(a):
    a = str(a)
    aRev = []
    for i in a:
        i = int(i)
        if i == 0:
            continue
        else:
            i = str(i)
            aRev.insert(0, i)
    result = "".join(aRev)
    result = int(result)
    return result

A, B = input("").split()
A = int(A)
B = int(B)
A = reverse(A)
B = reverse(B)
C = A+B
print(reverse(C))