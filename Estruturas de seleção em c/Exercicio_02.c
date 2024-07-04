#include<stdio.h>

int main()
{
  int numero_1,numero_2;

  printf("Digite o primeiro numero:");
  scanf("%d",&numero_1);
  printf("Digite o segundo numero:");
  scanf("%d",&numero_2);
  if(numero_1>numero_2)
  {
    printf("O primeiro numero e maior:\n");
  }
  else
  {
    if(numero_1<numero_2)
    {
      printf("O segundo numero e maior:\n");
    }
    else
    {
      if(numero_1==numero_2)
      {
        printf("Os numeros sao iguais:\n");
      }
    }
  }

  return 0;
}
