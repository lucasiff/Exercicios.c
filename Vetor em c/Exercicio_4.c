#include<stdio.h>

int main()
{
  int vetor[10],contador;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o vetor A:");
    scanf("%d",&vetor[contador]);
  }
  printf("\nVetor B:\n");
  for(contador=9;contador>=0;contador--)
  {
    printf("\n%d\n",vetor[contador]);
  }

  return 0;
}
