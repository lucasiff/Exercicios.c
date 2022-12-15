#include<stdio.h>

int main()
{
  int caixa_eletronico,totalD=0,totalR=0,totalS=0,totalE=0;

  do
  {
    printf("\n\n1-Deposito\n");
    printf("2-Retirada\n");
    printf("3-Saldo\n");
    printf("4-Extratos\n");
    printf("5-Sair do programa\n");
    scanf("%d",&caixa_eletronico);
    switch(caixa_eletronico)
    {
      case 1:
      printf("\nDeposito\n");
      totalD++;caixa_eletronico;
      break;
      case 2:
      printf("\nRetirada\n");
      totalR++;caixa_eletronico;
      break;
      case 3:
      printf("\nSaldo\n");
      totalS++;caixa_eletronico;
      break;
      case 4:
      printf("\nExtrato\n");
      totalE++;caixa_eletronico;
      break;
    }
  }
  while(caixa_eletronico!=5);
  printf("Total de Depositos = %d",totalD);
  printf("\nTotal de Retiradas = %d",totalR);
  printf("\nTotal de Saldos = %d",totalS);
  printf("\nTotal de Extratos = %d",totalE);

  return 0;
}
