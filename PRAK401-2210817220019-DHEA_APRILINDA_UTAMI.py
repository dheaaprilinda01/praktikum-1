angka , karakter= input().split()
angka = int(angka)
for number in range(1, 51):
    if (number % angka == 0):
        print(karakter," ", end="")
    else:
        print(number," ", end="")