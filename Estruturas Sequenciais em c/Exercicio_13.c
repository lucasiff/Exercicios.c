#include<stdio.h>

int main()
{
  int valor,nota_100,nota_50,nota_20,nota_10,nota_5,nota_2,nota_1,resto;

  printf("Digite o valor:");
  scanf("%d",&valor);
  nota_100=valor/100;
  resto=valor%100;
  nota_50=resto/50;
  resto=resto%50;
  nota_20=resto/20;
  resto=resto%20;
  nota_10=resto/10;
  resto=resto%10;
  nota_5=resto/5;
  resto=resto%5;
  nota_2=resto/2;
  resto=resto%2;
  nota_1=resto;
  printf("Notas de 100:%d\n",nota_100);
  printf("Notas de 50:%d",nota_50);
  printf("\nNotas de 20:%d\n",nota_20);
  printf("Notas de 10:%d\n",nota_10);
  printf("Notas de 5:%d\n",nota_5);
  printf("Notas de 2:%d\n",nota_2);
  printf("Moedas de 1:%d\n",nota_1);

  return 0;
}
