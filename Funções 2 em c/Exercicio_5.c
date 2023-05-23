#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void embaralhar(char *vet)
{
  srand(time(NULL));
  int tamanho,i,aux;
  char r;

  tamanho=strlen(vet);
  r=rand()%tamanho;
  for(i=0;i<tamanho;i++)
  {
    aux=vet[i];
    vet[i]=vet[r];
    vet[r]=aux;
  }
}

void mostrar(char *vet)
{
  printf("%s\n",vet);
}

int main()
{
  char vetor[10];
  int contador;

  printf("Digite uma palavra:");
  scanf("%s",vetor);
  embaralhar(vetor);
  mostrar(vetor);

  return 0;
}
