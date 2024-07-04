#include<stdio.h>

int main()
{
  int numero;

  printf("Entre com o valor do numero:");
  scanf("%d",&numero);
  numero=numero-1;
  printf("O seu numero antecessor e:%d\n",numero);
  numero=numero+2;
  printf("O seu numero sucessor e:%d\n",numero);

  return 0;
}
