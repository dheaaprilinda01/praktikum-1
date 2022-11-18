#include <stdio.h>

int main()
{
    int i, a, b;
    scanf("%d", &i);
    for(a =1; a<=i ; a++){
        if(a %2==1){
            printf("%d ", a);
        }
    }
    printf("\n");
    for (b=i; b>=1 ; b--){
        if(b %2!=1){
            printf("%d ", b);
        }
    }
}