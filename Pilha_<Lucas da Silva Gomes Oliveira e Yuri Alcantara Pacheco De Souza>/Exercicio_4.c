#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"pilha_par_impar.h"

int main ()
{
   int tamanhop, numeros;
   TipoPilha pilhaPar, pilhaImpar;
   TipoItem itemPar, itemImpar;
   FpVazia(&pilhaPar);
   FpVazia(&pilhaImpar);

   printf("Digite o tamaho da pilha:");
   scanf("%d", &tamanhop);
   srand(time(NULL));
   for (int i=tamanhop;i>0;i--)
   {
      numeros=rand()%100;
      if (!(numeros%2))
      {
         itemPar.Chave=numeros;
         push(itemPar,&pilhaPar);
      }
      else
      {
        itemImpar.Chave=numeros;
        push(itemImpar,&pilhaImpar);
      }
    }
    printf("Numeros Pares : ");
    for (int i=pilhaPar.Tamanho; i > 0; i--)
    {
      pop(&itemPar, &pilhaPar);
       printf("\n%d\n", itemPar.Chave);
    }
   printf("\nNumeros Impares : ");
    for (int i=pilhaImpar.Tamanho; i > 0; i--)
    {
      pop(&itemImpar, &pilhaImpar);
      printf("\n%d\n", itemImpar.Chave);
    }
   return 0;

}
