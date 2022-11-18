#include <stdio.h>
#include <string.h>

int main()
{
    char kataA[100], kataB[100];
    scanf(" %[^\n]%*c", &kataA);
    scanf(" %[^\n]%*c", &kataB);
    int lenA, lenB, i, c=0, d=0;
    lenA = strlen(kataA);
    lenB = strlen(kataB);
    if (lenA!=lenB){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        for (i=0;i<lenA;i++){
            if(kataA[i]==kataB[i]){
                printf("*");
                c++;
            }
            else{
                printf("#");
                d++;
            }
        }
        printf("\n* = %d", c);
        printf("\n# = %d", d);
        if(c>=d){
            printf("\nPesan Asli");
        }
        else{
            printf("\nPesan Palsu");
        }
    }
}