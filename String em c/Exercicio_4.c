#include<stdio.h>
#include<string.h>

int main()
{
  char palavra1[50],palavra2[50],menor_palavra[50];
  int tamanho1,tamanho2;

  printf("Digite a primeira palavra:");
  scanf("%s",palavra1);
  printf("Digite a segunda palavra:");
  scanf("%s",palavra2);
  tamanho1=strlen(palavra1);
  tamanho2=strlen(palavra2);
  if(tamanho1<tamanho2)
  {
    printf("A primeira palavra e a menor.");
  }
  else
  {
    if(tamanho2<tamanho1)
    {
      printf("A segunda palavra e a menor.");
    }
    else
    {
      printf("As duas palavras tem o mesmo tamanho.");
    }
  }
  return 0;
}
