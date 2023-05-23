#include<stdio.h>
#include<string.h>

int main()
{
  char nome[15][10];
  int contador;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite um nome:");
    scanf("%s",nome[contador]);
  }
  for(contador=9;contador>=0;contador--)
  {
    printf("\n%s\n",nome[contador]);
  }

  return 0;
}
