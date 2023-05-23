#include<stdio.h>

int main()
{
  int vetor_A[]={12,6,18,3,23,1,14},vetor_B[]={3,12,27,4,3,11,1},matriz_C[7][2];
  int linha,coluna;

  for(linha=0;linha<7;linha++)
  {
    for(coluna=0;coluna<2;coluna++)
    {
      if(coluna<1)
      {
        matriz_C[linha][coluna]=vetor_A[linha];
      }
      if(coluna>0)
      {
        matriz_C[linha][coluna]=vetor_B[linha];
      }
    }
  }
  printf("\n");
  printf("matriz_C:\n");
  printf("linha 1,coluna 1 = %d\n",matriz_C[0][0]);
  printf("linha 1,coluna 2 = %d\n",matriz_C[0][1]);
  printf("linha 2,coluna 1 = %d\n",matriz_C[1][0]);
  printf("linha 2,coluna 2 = %d\n",matriz_C[1][1]);
  printf("linha 3,coluna 1 = %d\n",matriz_C[2][0]);
  printf("linha 3,coluna 2 = %d\n",matriz_C[2][1]);
  printf("linha 4,coluna 1 = %d\n",matriz_C[3][0]);
  printf("linha 4,coluna 2 = %d\n",matriz_C[3][1]);
  printf("linha 5,coluna 1 = %d\n",matriz_C[4][0]);
  printf("linha 5,coluna 2 = %d\n",matriz_C[4][1]);
  printf("linha 6,coluna 1 = %d\n",matriz_C[5][0]);
  printf("linha 6,coluna 2 = %d\n",matriz_C[5][1]);
  printf("linha 7,coluna 1 = %d\n",matriz_C[6][0]);
  printf("linha 7,coluna 2 = %d\n",matriz_C[6][1]);

  return 0;
}
