#include<stdio.h>

int main ()
{
  int contador=0,pais_A=5000000,pais_B=7000000;

  while(pais_A<pais_B)
  {
    contador++;
    pais_A=pais_A+0.03*pais_A;
    pais_B=pais_B+0.02*pais_B;
  }
  printf("\nO tempo necessario para que o pais (A) ultrapasse o pais (B) e:%d anos",contador);

  return 0;
}
