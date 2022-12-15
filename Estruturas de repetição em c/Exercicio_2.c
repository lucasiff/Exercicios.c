#include<stdio.h>

int main()
{
  int numero,contador=1;
  float soma;

  while(contador<=100)
  {
    printf("Digite um numero:");
    scanf("%d",&numero);
    soma+=numero;
    contador++;
  }
  printf("A soma dos numeros e = %.2f\n",soma);

  return 0;
}
