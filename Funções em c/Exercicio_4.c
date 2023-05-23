#include<stdio.h>

int perfeito(int n)
{
  int contador,soma=0;

  for(contador=1;contador<n;contador++)
  {
    if(n%contador==0)
    {
      soma+=contador;
    }
  }
  if(soma==n)
  {
    return printf("O numero digitado e perfeito!");
  }
  else
  {
    return printf("O numero digitado nao e perfeito!");
  }
}

int main()
{
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);
  perfeito(numero);

  return 0;
}
