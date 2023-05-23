#include<stdio.h>
#include<string.h>

int main()
{
  char nome[100],pessoa_baixa[100],pessoa_alta[100];
  float altura,media_altura,soma_altura=0,menor_altura=999,maior_altura=0;
  int contador=0;

  for(contador=1;contador<=20;contador++)
  {
    printf("Digite o seu nome:\n");
    scanf("%s",nome);
    printf("Digite a sua altura:Ex 1.80:\n");
    scanf("%f",&altura);
    soma_altura+=altura;
    media_altura=soma_altura/20;
    if(altura<menor_altura)
    {
      menor_altura=altura;
      strcpy(pessoa_baixa,nome);
    }
    if(altura>maior_altura)
    {
      maior_altura=altura;
      strcpy(pessoa_alta,nome);
    }
  }
  printf("A media de altura das pessoas:%.2f",media_altura);
  printf("\nO nome da pessoa mais baixa:%s",pessoa_baixa);
  printf("\nO nome da pessoa mais alta:%s",pessoa_alta);

  return 0;
}
