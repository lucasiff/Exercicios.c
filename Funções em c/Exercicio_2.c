#include<stdio.h>

int positivo_negativo(int n)
{
  if(n>0)
  {
    return printf("P");
  }
  else
  {
    return printf("N");
  }
}

int main()
{
  int numero;
  printf("Digite um numero:");
  scanf("%d",&numero);
  positivo_negativo(numero);

  return 0;
}
