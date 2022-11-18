#include <stdio.h>

int main()
{
    int i, c, a;
    scanf("%d %c",&i, &c);
    for(int a=1 ; a<=50 ; a++){
       if(a %i==0){
        printf("%c ", c);
       }
       else{
        printf("%d ", a);
       }
    }
}
