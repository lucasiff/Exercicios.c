#include<stdio.h>

int main()
{
  int contador;
  float soma;

  for(contador=1;contador<=1000;contador++)
  {
    soma+=contador;
  }
  printf("A soma dos numeros de 1 a 1000 = %.2f",soma);

  return 0;
}
