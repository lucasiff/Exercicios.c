#include<stdio.h>
#include<string.h>

int main()
{
  char nome[15][10],sexo[10][10];
  int contador;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o seu nome:");
    scanf("%s",nome[contador]);
    printf("Digite o seu sexo:");
    scanf("%s",sexo[contador]);
  }
  printf("\n");
  printf("Mulheres:");
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    if(strcmp(sexo[contador],"feminino")==0)
    {
      printf("%s\n",nome[contador]);
    }
  }
  printf("\n");
  printf("Homens:");
  printf("\n");
  for(contador=0;contador<10;contador++)
  {
    if(strcmp(sexo[contador],"masculino")==0)
    {
      printf("%s\n",nome[contador]);
    }
  }

  return 0;
}
