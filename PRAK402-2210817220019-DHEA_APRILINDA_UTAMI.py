angka = int(input())
bilangan = angka+1
for deret in range (1,angka+1):
    if deret %2==1:
        print(deret," ", end="")
print("")
while  bilangan>=2 :
    bilangan = bilangan-1
    if bilangan %2!=1:
        print(bilangan," ", end="")
        