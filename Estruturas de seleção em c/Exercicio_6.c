#include<stdio.h>

int main()
{
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);
  if(numero%3==0)
  {
    printf("Este numero e multiplo de 3:\n");
  }
  else
  {
    printf("Este numero nao e multiplo de 3:\n");
  }

  return 0;
}      
