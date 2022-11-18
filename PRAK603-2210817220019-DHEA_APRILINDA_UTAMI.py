import numpy as np
x, y = input().split()
x = int(x)
y = int(y)

if (x==y):
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    Anp = np.array(a)
    Bnp = np.array(b)
    hasil = Anp*Bnp
    print(hasil)

if(x!=y):
    print("Jumlah tidak sama")