baris = int(input())
matrix = []
a = []
b= []
print ("Matriks A")
for i in range (baris):
    matriksA= [int (j) for j in input().split()]
    a.append(matriksA)
    matrix.append(a)
print("Matriks B")
for i in range (baris):
    matriksB= [int (j) for j in input().split()]
    b.append(matriksB)
    matrix.append(b)
hasil = [[0 for i in range (baris)]for j in range(baris)]
for i in range(baris):
    for j in range (baris):
        for k in range (baris):
            hasil[i][j]= hasil[i][j]+a[i][k]*b[k][j]
print("Matriks AXB")
for i in range(baris):
    for j in range (baris):
        print(format(hasil[i][j]), end=" ")
    print()