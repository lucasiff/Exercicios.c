#include<stdio.h>

int main()
{
  int dia_1,dia_2,mes_1,mes_2,ano_1,ano_2,idade_1,idade_2,idade_3;

  printf("Digite o dia em que voce nasceu:");
  scanf("%d",&dia_1);
  printf("Digite o mes em que voce nasceu:");
  scanf("%d",&mes_1);
  printf("Digite o ano em que voce nesceu:");
  scanf("%d",&ano_1 );
  printf("Digite o dia em que voce esta:");
  scanf("%d",&dia_2);
  printf("Digite o mes em que voce esta:");
  scanf("%d",&mes_2);
  printf("Digite o ano em que voce esta:");
  scanf("%d",&ano_2);
  idade_1=ano_2-ano_1;
  idade_2=idade_1*365;
  idade_3=idade_1*12;
  printf (" Voce tem %d dia(s) ","%d mes(es)","%d ano(s)",idade_1,idade_2,idade_3);

  return 0;
}
