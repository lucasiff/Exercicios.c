#include<stdio.h>

int main()
{
  int contador,n;
  float soma;

  printf("Digite um numero:");
  scanf("%d",&n);
  for(contador=1;contador<=n;contador++)
  {
    soma+=contador;
  }
  printf("O resultado e = %.2f",soma);

  return 0;
}
