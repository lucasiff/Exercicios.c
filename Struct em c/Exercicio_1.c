#include<stdio.h>

int main()
{
  int matriz_A[5][3]={1,2,3,9,8,7,11,13,15,21,23,30,25,14,15};
  int matriz_B[5][3]={10,12,20,23,39,30,11,42,40,4,5,16,12,20,10};
  int matriz_C[5][3],linha,coluna;

  printf("Matriz A:\n");
  printf("linha 1,coluna 1 = %d\n",matriz_A[0][0]);
  printf("linha 1,coluna 2 = %d\n",matriz_A[0][1]);
  printf("linha 1,coluna 3 = %d\n",matriz_A[0][2]);
  printf("linha 2,coluna 1 = %d\n",matriz_A[1][0]);
  printf("linha 2,coluna 2 = %d\n",matriz_A[1][1]);
  printf("linha 2,coluna 3 = %d\n",matriz_A[1][2]);
  printf("linha 3,coluna 1 = %d\n",matriz_A[2][0]);
  printf("linha 3,coluna 2 = %d\n",matriz_A[2][1]);
  printf("linha 3,coluna 3 = %d\n",matriz_A[2][2]);
  printf("linha 4,coluna 1 = %d\n",matriz_A[3][0]);
  printf("linha 4,coluna 2 = %d\n",matriz_A[3][1]);
  printf("linha 4,coluna 3 = %d\n",matriz_A[3][2]);
  printf("linha 5,coluna 1 = %d\n",matriz_A[4][0]);
  printf("linha 5,coluna 2 = %d\n",matriz_A[4][1]);
  printf("linha 5,coluna 3 = %d\n",matriz_A[4][2]);
  printf("\n");
  printf("Matriz B:\n");
  printf("linha 1,coluna 1 = %d\n",matriz_B[0][0]);
  printf("linha 1,coluna 2 = %d\n",matriz_B[0][1]);
  printf("linha 1,coluna 3 = %d\n",matriz_B[0][2]);
  printf("linha 2,coluna 1 = %d\n",matriz_B[1][0]);
  printf("linha 2,coluna 2 = %d\n",matriz_B[1][1]);
  printf("linha 2,coluna 3 = %d\n",matriz_B[1][2]);
  printf("linha 3,coluna 1 = %d\n",matriz_B[2][0]);
  printf("linha 3,coluna 2 = %d\n",matriz_B[2][1]);
  printf("linha 3,coluna 3 = %d\n",matriz_B[2][2]);
  printf("linha 4,coluna 1 = %d\n",matriz_B[3][0]);
  printf("linha 4,coluna 2 = %d\n",matriz_B[3][1]);
  printf("linha 4,coluna 3 = %d\n",matriz_B[3][2]);
  printf("linha 5,coluna 1 = %d\n",matriz_B[4][0]);
  printf("linha 5,coluna 2 = %d\n",matriz_B[4][1]);
  printf("linha 5,coluna 3 = %d\n",matriz_B[4][2]);
  for(linha=0;linha<5;linha++)
  {
    for(coluna=0;coluna<3;coluna++)
    {
      matriz_C[linha][coluna]=matriz_A[linha][coluna]+matriz_B[linha][coluna];
    }
  }
  printf("\n");
  printf("matriz_C:\n");
  printf("linha 1,coluna 1 = %d\n",matriz_C[0][0]);
  printf("linha 1,coluna 2 = %d\n",matriz_C[0][1]);
  printf("linha 1,coluna 3 = %d\n",matriz_C[0][2]);
  printf("linha 2,coluna 1 = %d\n",matriz_C[1][0]);
  printf("linha 2,coluna 2 = %d\n",matriz_C[1][1]);
  printf("linha 2,coluna 3 = %d\n",matriz_C[1][2]);
  printf("linha 3,coluna 1 = %d\n",matriz_C[2][0]);
  printf("linha 3,coluna 2 = %d\n",matriz_C[2][1]);
  printf("linha 3,coluna 3 = %d\n",matriz_C[2][2]);
  printf("linha 4,coluna 1 = %d\n",matriz_C[3][0]);
  printf("linha 4,coluna 2 = %d\n",matriz_C[3][1]);
  printf("linha 4,coluna 3 = %d\n",matriz_C[3][2]);
  printf("linha 5,coluna 1 = %d\n",matriz_C[4][0]);
  printf("linha 5,coluna 2 = %d\n",matriz_C[4][1]);
  printf("linha 5,coluna 3 = %d\n",matriz_C[4][2]);

  return 0;
}
