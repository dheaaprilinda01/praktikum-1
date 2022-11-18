tinggi, miring = (int(input()) for _ in range(2))
alas = (miring**2-tinggi**2)**0.5
print("Alas =",round(alas),"cm")
print("Tinggi =",round(tinggi),"cm")
print("Keliling =",round(tinggi + miring + alas),"cm")
print("luas =",round(tinggi*alas/2),"cm^2")