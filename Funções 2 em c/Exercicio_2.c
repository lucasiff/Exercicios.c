#include<stdio.h>

void inverter(int *vet,int n)
{
  int inicio=0,fim=n-1;
  int aux,contador;

  while(inicio<fim)
  {
    aux=vet[inicio];
    vet[inicio]=vet[fim];
    vet[fim]=aux;
    inicio++;
    fim--;
  }
}

void mostrar(int *vet,int n)
{
  int contador;

  for(int contador=0;contador<10;contador++)
  {
    printf("%d-",vet[contador]);
  }
  printf("\n");
}
int main()
{
  int vetor[10]={10,20,30,40,50,60,70,80,90,100};

  inverter(vetor,10);
  mostrar(vetor,10);

  return 0;
}
