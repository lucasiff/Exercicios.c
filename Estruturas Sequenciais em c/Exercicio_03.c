#include<stdio.h>

int main()
{
  int comprimento, altura, largura, volume;

  printf("Entre com o comprimento da caixa:");
  scanf("%d", &comprimento);
  printf("Entre com a altura:");
  scanf("%d", &altura);
  printf("Entre com a largura:");
  scanf("%d", &largura);
  volume = comprimento * largura * altura;
  printf("O volume da caixa e = %d", volume);

  return 0;
}
