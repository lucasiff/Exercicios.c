#include<stdio.h>
#include<string.h>

char inverter(char p[],int n)
{
  if(n==1)
  {
    return p[0];
  }
  else
  {
    return p[n-1];
  }
}

int main()
{
  char palavra[15];
  int tamanho,contador;

  printf("Digite uma palavra:");
  scanf("%s",palavra);
  tamanho=strlen(palavra);
  for(contador=0;contador<tamanho;tamanho--)
  {
    printf("%c",inverter(palavra,tamanho));
  }

  return 0;
}
