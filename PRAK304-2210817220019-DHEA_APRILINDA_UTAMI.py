bil = int(input())
if bil==0:
    print("Nol")
elif bil>0 and bil<=10:
    print("Satuan")
elif bil>10 and bil<20:
    print("Belasan")
elif bil>=20 and bil<100:
    print("Puluhan")
elif bil>=100:
    print("Anda Menginput Melebihi Limit Bilangan")