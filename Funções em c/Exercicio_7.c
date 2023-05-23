#include<stdio.h>

int fatorial(int n)
{
  int fat;
  for(fat=1;n>1;n=n-1)
  {
    fat=fat*n;
  }
  if(n>=0)
  {
    printf("\nO fatorial do numero digitado e:%d",fat);
  }
  else
  {
    return printf("-1");
  }
}

int main()
{
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);
  fatorial(numero);

  return 0;
}
