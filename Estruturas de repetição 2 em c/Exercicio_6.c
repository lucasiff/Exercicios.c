#include<stdio.h>

int main ()
{
  int contador;
  float altura,media_alturaM,media_alturaT,soma_alturaT=0,soma_alturaM=0,maior_altura=0,menor_altura=999;
  char sexo;

  for(contador=1;contador<=10;contador++)
  {
    printf("Digite o seu sexo:(M/F)");
    scanf("%c",&sexo);
    printf("Digite a sua altura:");
    scanf("%f",&altura);
    fflush(stdin);
    if(altura>maior_altura)
    {
      maior_altura=altura;
    }
    if(altura<menor_altura)
    {
      menor_altura=altura;
    }
    else
    {
      if(sexo=='f'||sexo=='F')
      {
        soma_alturaM+=altura;
        media_alturaM=soma_alturaM/2;
      }
    }
    soma_alturaT+=altura;
    media_alturaT=soma_alturaT/2;
  }
  printf("A maior altura da turma e:%.2f",maior_altura);
  printf("\nA media de altura feminina e:%.2f",media_alturaM);
  printf("\nA media de altura total e:%.2f",media_alturaT);
  printf("\nA menor altura da turma e:%.2f",menor_altura);

  return 0;
}
