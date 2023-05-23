#include<stdio.h>

int main()
{
  int matriz[5][4][2]={9,1,0,-1,28,4,3,2,8,7,6,5,17,10,9,8,14,13,12,18,-3,4,5,25,0,23,-1,3,1,22,19,2,30,17,8,19,-15,5,-32,20};
  int matriz_0[5][4],matriz_1[5][4];
  int linha,coluna,profundidade;

  for(linha=0;linha<5;linha++)
  {
    for(coluna=0;coluna<4;coluna++)
    {
      for(profundidade=0;profundidade<2;profundidade++)
      {
        if(profundidade<1)
        {
          matriz_0[linha][coluna]=matriz[linha][coluna][profundidade];
          printf("A profundidade 0 da matriz: %d\n",matriz_0[linha][coluna]);
        }
      }
    }
  }
  printf("\n");
  for(linha=0;linha<5;linha++)
  {
    for(coluna=0;coluna<4;coluna++)
    {
      for(profundidade=0;profundidade<2;profundidade++)
      {
        if(profundidade=1)
        {
          matriz_1[linha][coluna]=matriz[linha][coluna][profundidade];
          printf("A profundidade 1 da matriz: %d\n",matriz_1[linha][coluna]);
        }
      }
    }
  }


  return 0;
}
