#include<stdio.h>
#include<string.h>

int main()
{
  char string1[20],string2[20];
  int tamanho1,tamanho2;

  printf("Digite a primeira string:");
  scanf("%s",string1);
  printf("Digite a segunda string:");
  scanf("%s",string2);
  printf("\nprimeira string:%s",string1);
  tamanho1=strlen(string1);
  printf("\ntamanho da primeira string:%d",tamanho1);
  printf("\nsegunda string:%s",string2);
  tamanho2=strlen(string2);
  printf("\ntamanho da segunda string:%d",tamanho2);
  if(tamanho1==tamanho2)
  {
    printf("\nas duas strings tem o mesmo tamanho.");
  }
  if(strcmp(string1,string2)==0)
  {
    printf("\nas duas strings sao iguais.");
  }
  else
  {
    printf("\nas duas strings sao diferentes.");
  }

  return 0;
}
