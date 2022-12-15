#include<stdio.h>

int main()
{
  int opcao;
  float lado,area,base,altura,raio;

  do
  {
    printf("\n\n1-Calcular a area do quadrado:\n");
    printf("2-Calcular a area do retangulo:\n");
    printf("3-Calcular a area do triangulo:\n");
    printf("4-Calcule a area do circulo:\n");
    printf("5-Sair do algoritmo:\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
      case 1:
      printf("opcao 1 selecionada\n");
      printf("insira o lado do quadrado:");
      scanf("%f",&lado);
      area=(lado*lado);
      printf("A area do quadrado e:%.2f\n",area);
      break;
      case 2:
      printf("opcao 2 selecionada\n");
      printf("insira a base do retangulo:");
      scanf("%f",&base);
      printf("insira a altura do retangulo:");
      scanf("%f",&altura);
      area=(base*altura);
      printf("A area do retangulo e:%.2f\n",area);
      break;
      case 3:
      printf("opcao 3 selecionada\n");
      printf("insira a base do triangulo:");
      scanf("%f",&base);
      printf("insira a altura do triangulo:");
      scanf("%f",&altura);
      area=(base*altura)/2;
      printf("A area do triangulo e:%.2f\n",area);
      break;
      case 4:
      printf("opcao 4 selecionada\n");
      printf("insira o raio do circulo:");
      scanf("%f",&raio);
      area=3.14*(raio*raio);
      printf("A area do circulo e:%.2f\n",area);
      break;
    }
  }
  while(opcao!=5);

  return 0;
}
