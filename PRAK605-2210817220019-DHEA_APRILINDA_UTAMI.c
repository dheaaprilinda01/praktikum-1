#include <stdio.h>
int main()
{
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, jumlah = 0;
  scanf("%d",&m);

    printf("matriks A \n");
    for(i = 0; i < m; i++){
      for(j = 0; j < m; j++){
        scanf("%d", &matriks1[i][j]);
      }
    }
    printf("matriks B \n");
    for(i = 0; i < m; i++){
      for(j = 0; j < m; j++){
        scanf("%d", &matriks2[i][j]);
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < m; j++){
        for(k = 0; k < m; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    printf("Matriks AXB \n");
    for(i = 0; i < m; i++){
      for(j = 0; j < m; j++){
        printf("%d\t", hasil[i][j]);
      }
      printf("\n");
    }
  }