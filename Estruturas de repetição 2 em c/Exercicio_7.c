#include<stdio.h>

int main()
{
  int numero,fatorial;

  printf("Digite um numero:");
  scanf("%d",&numero);
  for(fatorial=1;numero>1;numero=numero-1)
  {
    fatorial=fatorial*numero;
  }
  printf("\nO fatorial do numero digitado e:%d",fatorial);

  return 0;
}
