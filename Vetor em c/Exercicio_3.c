#include<stdio.h>

int main()
{
  int numeros[10],maior,contador,posicao_M;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o numero da posicao %d:",contador);
    scanf("%d",&numeros[contador]);
  }
  maior=numeros[0];
  posicao_M=0;
  for(contador=1;contador<10;contador++)
  {
    if(maior<numeros[contador])
    {
      maior=numeros[contador];
    }
  }
  printf("\nO maior numero do vetor:numero:%d",maior);
  for(contador=1;contador<10;contador++)
  {
    if(numeros[contador]==maior)
    {
      posicao_M=contador;
      printf("\nPosicao:%d",posicao_M);
    }
  }

  return 0;
}
