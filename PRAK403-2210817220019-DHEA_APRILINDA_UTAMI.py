x, y = list(input().split())
x = int(x)
y = int(y)
depan = x+1
belakang = y+1
mindepan = x-1
minbelakang = y-1

while mindepan<=belakang:
    print('%d %d' % (x,y), end="")
    x = x+1
    y = y-1
    if y!=mindepan:
        print(" - ", end="")
    if x == belakang:
        print("")
        break
while depan>=minbelakang:
    print('%d %d' % (x,y), end="")
    x = x-1
    y = y+1
    if x!=minbelakang:
        print(" - ", end="")
    if y == depan:
        print("")
        break
       



