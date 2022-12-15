#include<stdio.h>

int main()
{
  int numero,contador,menor_i=999,maior_p=0;
  float media_p,media_i,soma_p=0,soma_i=1;
  do
  {
    printf("Digite um numero:");
    scanf("%d",&numero);
    if(numero%2==0)
    {
      soma_p+=numero;
      media_p=soma_p/2;
      if(numero>maior_p)
      {
        maior_p=numero;
      }
    }
    else
    {
      if(numero%2==1)
      {
        soma_i+=numero;
        media_i=soma_i/2;
        if(numero<menor_i)
        {
          menor_i=numero;
        }
      }
    }
  }
  while(numero>0);
  printf("A media de numeros pares:%.2f",media_p);
  printf("\nA media de numeros impares:%.2f",media_i);
  printf("\nO maior numero par:%d",maior_p);
  printf("\nO menor numero impar:%d",menor_i);

  return 0;
}
