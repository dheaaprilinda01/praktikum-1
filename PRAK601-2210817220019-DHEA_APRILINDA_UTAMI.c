#include <stdio.h>

    int main()
{
   int baris, kolom, i, j, matrik1[10][10];
 
   scanf("%d %d", &baris, &kolom);

   for (i = 0; i < baris; i++){
      for (j = 0; j < kolom; j++){
  scanf("%d",&matrik1[i][j]);
      }
   }
   
   for (i=0; i<baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik1[i][j]);
    }
    printf("\n");
   }
   
}
