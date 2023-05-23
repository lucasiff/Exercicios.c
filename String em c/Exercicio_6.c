#include<stdio.h>
#include<string.h>

int main()
{
  char nome[10];
  int contador;

  printf("Digite um nome:");
  scanf("%s",nome);
  for(contador=0;nome[contador]!='\0';contador++)
  {
    printf("%c\n",nome[contador]);
  }

  return 0;
}
