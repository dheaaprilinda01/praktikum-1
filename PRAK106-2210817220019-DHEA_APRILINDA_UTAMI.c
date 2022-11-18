#include <stdio.h>

int main()
{
int a , b , c, x, y, z;
a = 4;
b = 8;
c = 3;

printf("variabel a bernilai 4\n");
printf("variabel b bernilai 8\n");
printf("variabel c bernilai 3\n");

printf("Apakah a sama dengan b ? jawabannya adalah ", x);
if (a==b)
{
    printf("1",x);
}

else 
{
    printf("0",x);
}
printf("\n");
printf("Apakah b lebih besar dari c ? jawabannya adalah ", y );

if (b>c)
{
    printf("1", y);
}
else
{
    printf("0", y);
}
printf("\n");
printf("Apakah a tidak sama dengan c ? jawabannya adalah ", z );

if (a!=c)
{
    printf("1", z);
}
else
{
    printf("0", z);
}
}