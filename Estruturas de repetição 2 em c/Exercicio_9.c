#include<stdio.h>

int main()
{
  int caixa_eletronico,saldo=0,deposito,retirada;

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
      printf("\nDigite o valor da operacao:R$");
      scanf("%d",&deposito);
      saldo+=deposito;
      break;
      case 2:
      printf("\nRetirada\n");
      printf("\nDigite o valor da operacao:R$");
      scanf("%d",&retirada);
      saldo-=retirada;
      break;
      case 3:
      printf("\nSaldo\n");
      printf("\nO seu saldo total:R$%d",saldo);
      break;
      case 4:
      printf("\nExtrato\n");
      break;
    }
  }
  while(caixa_eletronico!=5);

  return 0;
}
