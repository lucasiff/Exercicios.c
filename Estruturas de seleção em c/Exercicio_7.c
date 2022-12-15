#include<stdio.h>

int main()
{
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);
  if((numero>0)&&(numero<100))
  {
    printf("O numero digitado esta no intervalo entre 0 e 100:\n");
  }
  else
  {
    printf("O numero digitado nao esta no intervalo entre 0 e 100:\n");
  }

  return 0;
}
