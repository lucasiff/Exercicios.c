#include<stdio.h>

int main()
{
  float numero;
  int total=0;
  while(numero>=0)
  {
    printf("Digite um numero positivo:");
    scanf("%f",&numero);
    if(numero>=0)
    total++;numero++;
  }
  printf("Foram digitados %d numero(s) positivo(s).",total);
  
  return 0;
}
