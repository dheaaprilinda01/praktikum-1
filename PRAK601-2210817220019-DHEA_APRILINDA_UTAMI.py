baris, kolom = map(int, input().split())
matrix =[]
a=0
isi = list(map(int, input().split()))
for i in range (baris):
    matrix.append(isi[a:a+kolom])
    a=a+kolom
for baris in matrix:
    for isi in baris:
        print(isi," ", end="")
    print()