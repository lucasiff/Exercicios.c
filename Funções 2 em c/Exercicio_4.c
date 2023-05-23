#include<stdio.h>

void decrescente(int *vet)
{
  int i,j,maior,menor,aux;

  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
      if(vet[i]<vet[j])
      {
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
      }
    }
  }
}

void mostrar(int *vet)
{
  int i;

  for(i=0;i<10;i++)
  {
    printf("%d\n",vet[i]);
  }
}

int main()
{
  int vetor[10],contador;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite um numero:");
    scanf("%d",&vetor[contador]);
  }
  decrescente(vetor);
  mostrar(vetor);
}
