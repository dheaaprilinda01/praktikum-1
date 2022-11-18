#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>0)
    {
        printf("Positif");
    }
    else if (a<0)
    {
        printf("Negatif");
    }
    else if (a==0)
    {
        printf("Nol");
    }
}