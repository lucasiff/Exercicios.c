#include<stdio.h>

int main()
{
  int numero=1,soma=0;

  while(numero<1000)
  {
    if((numero%3==0)||(numero%5==0))
    soma+=numero;
    numero++;
  }
  printf("A soma dos Multiplos de 3 ate 5 abaixo de 1000:%d\n",soma);

  return 0;
}
