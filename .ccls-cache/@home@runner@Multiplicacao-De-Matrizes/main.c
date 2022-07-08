#include <stdio.h>
#include "matrizfunc.h"
int main(void) {
  int l1,c1,l2,c2,i,j,k,aux;
  printf("Multiplicação de Matrizes \n");
  printf("Dimensões da matriz A: ");
  scanf("%d %d",&l1,&c1);
  printf("Dimensões da matriz B: ");
  scanf("%d %d",&l2,&c2);
  if(c1==l2){
    int a[l1][c1],b[l2][c2],r[l1][c2];
    //preenchendo
    for(i=0;i<l1;i++){
      for(j=0;j<c1;j++){
        printf("A[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    for(i=0;i<l2;i++){
      for(j=0;j<c2;j++){
        printf("B[%d][%d]: ",i,j);
        scanf("%d",&b[i][j]);
      }
      printf("\n");
    }
    //multiplicando
    for(i=0;i<l1;i++){
      for(j=0;j<c2;j++){
        aux=0;
        for(k=0;k<l2;k++){
          //veja que cada linha da matriz nova é um somatório de produtos
          aux=aux+a[i][k]*b[k][j];
          r[i][j]=aux;
        }
       
      }
    }
    printf("\n");
    for(i=0;i<l1;i++){
      for(j=0;j<c2;j++){
        printf(" %d ",r[i][j]);
      }
      printf("\n");
    }
    //
  }
  else{printf("Não pode multiplicar\n");}
  return 0;
}