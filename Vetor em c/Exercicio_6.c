#include<stdio.h>
#include<string.h>

int main()
{
  char nome[15][10];
  int idade[10],contador;
  float soma=0,media;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o seu nome:");
    scanf("%s",nome[contador]);
    printf("Digite a sua idade:");
    scanf("%d",&idade[contador]);
    soma+=idade[contador];
  }
  media=soma/10.0;
  printf("Media:%.1f",media);
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    if(idade[contador]>media)
    {
      printf("pessoas acima da media de idade:%s\n",nome[contador]);
    }
  }

  return 0;
}
