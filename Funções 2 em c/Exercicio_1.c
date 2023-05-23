#include<stdio.h>

int negativo(int *vet)
{
  int i,n=0;

  for(i=0;i<10;i++)
  {
    if(vet[i]<0)
    {
      n++;
    }
  }
  return n;
}

int main()
{
  int vetor[10],contador;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite um numero:");
    scanf("%d",&vetor[contador]);
  }
  printf("Quantidade de numeros negativos no vetor:%d\n",negativo(vetor));

  return 0;
}
