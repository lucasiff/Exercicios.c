#include<stdio.h>

int numero_primo(int n)
{
  int contador,resultado=0;

  for(contador=1;contador<=n;contador++)
  {
    if(n%contador==0)
    {
      resultado++;
    }
  }
  if(resultado==2)
  {
    return printf("1");
  }
  else
  {
    return printf("0");
  }
}

int main()
{
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);
  numero_primo(numero);

  return 0;
}
