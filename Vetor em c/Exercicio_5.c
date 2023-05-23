#include<stdio.h>

int main()
{
  int vetor_A[10],vetor_B[10],contador,soma[10],mesma_posicao=0;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o valor do vetor A na posicao %d:",contador);
    scanf("%d",&vetor_A[contador]);
  }
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    printf("Digite o valor do vetor B na posicao %d:",contador);
    scanf("%d",&vetor_B[contador]);
  }
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    soma[contador]=vetor_A[contador]+vetor_B[contador];
  }
  for(contador=0;contador<10;contador++)
  {
    printf("A soma dos vetores A e B:%d\n",soma[contador]);
  }
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    if(vetor_A[contador]==vetor_B[contador])
    {
      mesma_posicao++;
    }
  }
  printf(" Quantidade de vezes que em que os vetores A e B sao iguais:%d",mesma_posicao);

  return 0;
}
