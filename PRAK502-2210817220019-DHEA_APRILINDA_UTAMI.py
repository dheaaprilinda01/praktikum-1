def hitung(nilai1, nilai2):
    angka= nilai1-nilai2
    return angka
def mutlak(hasil):
    return abs(hasil)

a, c, b, d = input().split()
a= int(a)
b= int(b)
c=int(c)
d=int(d)
hasil = hitung(a,b) + hitung(c,d)
print(mutlak(hasil))
