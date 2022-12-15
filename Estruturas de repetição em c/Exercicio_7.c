#include<stdio.h>

int main()
{
  int n,contador;

  printf("Digite um numero:");
  scanf("%d",&n);
  for(contador=7;contador<=n;contador+=7)
  {
    printf("\nMultiplos de 7:%d\n",contador);
  }

  return 0;
}
