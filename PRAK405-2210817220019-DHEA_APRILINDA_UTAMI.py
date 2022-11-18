x, y = input().split()
x = int(x)
y = int(y)
h3=0
h2=0
h1=0
h=0
i =0
while i<x:
    i+=1
    j=i
    while j>=1:
        j-=1
        print("(%d*%d)" % (j+1 ,y), end="");
        if(j > 0):
            print(" + ", end="");
    h1 = (i) * y;
    h2 = h2 + h1;
    print("= %d"%(h2));
    h3 = h3 + h2;
print("%d" % (h3), end="");