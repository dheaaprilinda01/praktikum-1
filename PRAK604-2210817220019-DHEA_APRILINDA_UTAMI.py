kataA = input()
kataB = input()
c=0
d=0
if(len(kataA)!=len(kataB)):
    print("Panjang kalimat berbeda, pesan palsu")
else :
    for i in range (len(kataA)):
        if (kataA[i]==kataB[i]):
            print("*", end="")
            c+=1
        else:
            print("#", end="")
            d+=1
    print()
    print("* =", c)
    print("# =", d)
    if(c>=d):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")