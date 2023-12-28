#include<stdio.h>

int main()
{
  int camisas,calcas,meias,total_gasto;

  printf("Entre com o total de camisas:");
  scanf("%d",&camisas);
  printf("Entre com o total de calcas:");
  scanf("%d",&calcas);
  printf("Entre com o total de meias:");
  scanf("%d",&meias);
  total_gasto=camisas*5+calcas*10+meias*2;
  printf("O total gasto e = %d\n",total_gasto);

  return 0;
}
