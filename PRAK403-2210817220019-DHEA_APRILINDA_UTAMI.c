#include <stdio.h>

int main()
{
int a, b;
scanf("%d %d", &a, &b);
if(a<=b){
int i = a;
int j = b;
do
{
    printf("%d %d", i, j);
    if (j!=a){
    printf(" - ");
    }
    else {
        printf("");
    }
    i++;
    j--;
} while (i<=b , j>=a);
}
if(a>=b){
int i = a;
int j = b;
do
{
    printf("%d %d", i, j);
    if (j!=a){
    printf(" - ");
    }
    else {
        printf("");
    }
    i--;
    j++;
} while (i>=b , j<=a);
}
}