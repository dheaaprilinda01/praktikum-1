while True:
    print("Pilih Program")
    print("1.penjumlahan")
    print("2.pengurangan")
    print("3.perkalian")
    print("4.pembagian")
    print("5.exit")

    pilihan = int(input("masukkan Pilihan : "))
    if pilihan ==5:
        print("terimakasih, telah menggunakan kalkulator dhea")
        break
    if pilihan <5:
        a = int(input("masukkan angka pertama : "))
        b = int(input("masukkan angka kedua : "))
        if pilihan ==1:
                operasi = "penjumlahan"
                hasil = a+b
        if pilihan ==2:
                operasi = "pengurangan"
                hasil = a-b
        if pilihan ==3:
                operasi = "perkalian"
                hasil = a*b
        if pilihan ==4:
                operasi = "pembagian"
                hasil = a/b
        print("hasil",operasi,"antara %.2f dengan %.2f adalah %.2f" % (a,b,hasil))
        print("")
    if pilihan >5:
        print("input anda salah, silahkan coba lagi")
        print("")