baris = int(input())
angka = list(map(int, input().split()))
for i in range(baris):
    print((i+1)*angka[i], end=" ")
print()