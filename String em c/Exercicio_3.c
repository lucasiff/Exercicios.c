#include<stdio.h>
#include<string.h>

int main()
{
  char nome[100],sexo[100],nacionalidade[100],pessoa_pesada[100],brasileira_leve[100];
  float peso,soma_peso=0,media_peso=0,maior_peso=0,menor_peso=999;
  int total_peso=0;

  printf("Digite o seu nome:");
  scanf("%s",nome);
  while(strcmp(nome,"sair")!=0)
  {
    printf("Digite o seu sexo:");
    scanf("%s",sexo);
    printf("Digite o seu peso:(somente numeros):");
    scanf("%f",&peso);
    printf("Digite o nome do seu pais:");
    scanf("%s",nacionalidade);
    total_peso++;peso;
    soma_peso+=peso;
    if(peso>maior_peso)
    {
      maior_peso=peso;
      strcpy(pessoa_pesada,nome);
    }
    if((strcmp(sexo,"feminino")==0)&&(strcmp(nacionalidade,"brasil")==0)&&(peso<menor_peso))
    {
      menor_peso=peso;
      strcpy(brasileira_leve,nome);
    }
    printf("Digite o seu nome:");
    scanf("%s",nome);
  }
  media_peso=soma_peso/total_peso;
  printf("A media de peso das pessoas:%.2f",media_peso);
  printf("\nO nome da pessoa mais pesada:%s",pessoa_pesada);
  printf("\nA mulher brasileira mais leve:%s",brasileira_leve);

  return 0;
}
