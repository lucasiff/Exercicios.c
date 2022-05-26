#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "delay.h"
#include "fila.h"

int main()
{
  struct sfila Campos_Guarus;
  struct sfila Guarus_Campos;

  qinit(&Campos_Guarus);
  qinit(&Guarus_Campos);

  int opcao;
  char placa[10], opcao_continuar;

  do
  {
    printf("1-Cadastrar Campos-Guarus:\n");
    printf("2-Cadastrar Guarus-Campos:\n");
    printf("3-Liberar Travessia:\n");
    printf("4-Sair:\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
      case 1:
          printf("Entre com a placa do carro: ");
          scanf("%s",placa);
          enqueue(&Campos_Guarus,*placa);
      break;
      case 2:
          printf("Entre com a placa do carro: ");
          scanf("%s",placa);
          enqueue(&Guarus_Campos,*placa);
      break;
      case 3:
      do
        if (qisEmpty(&Campos_Guarus)&&(qisEmpty(&Guarus_Campos)))
        {
          system("cls");
          printf("Sem carros para atravessar. \n\n");
          break;
        }
        else
          {
            if (qisEmpty(&Campos_Guarus))
            {
              printf("\n   Travessia liberada\n      Sentido Campos-Guarus\n          Sem carros aguardando. \n");
            }
            else
            {
              printf("   Travessia liberada\n      Sentido Campos-Guarus\n          Atravessando o carro %c \n",dequeue(&Campos_Guarus));
              delay(5000);
            }
            if (qisEmpty(&Guarus_Campos))
            {
              printf("\n   Travessia liberada\n      Sentido Guarus-Campos\n          Sem carros aguardando. \n");
            }
            else
            {
              printf("   Travessia liberada\n      Sentido Guarus-Campos\n          Atravessando o carro %c \n", dequeue(&Guarus_Campos));
              delay(5000);
            }
            printf("Deseja prosseguir?(S/N)");
            scanf("%s",&opcao_continuar);
          }
      while(opcao_continuar=='S'||opcao_continuar=='s');
      break;
      default:
				printf("\nSaindo da operacao\n\n");
    }
  }
  while(opcao!=4);

  return 0;
}
