#include<stdio.h>

int main()
{
  int numero,contador;
  float soma;

  for(contador=1;contador<=10;contador++)
  {
    printf("Digite um numero:");
    scanf("%d",&numero);
    soma+=numero;
  }
  printf("A soma dos numeros e = %.2f\n",soma);

  return 0;
}
