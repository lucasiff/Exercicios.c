#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{
  struct spilha pilha;
  int i;

  init(&pilha);

  printf("Executando \n\n");

  push(&pilha,'A');
  push(&pilha,'B');
  push(&pilha,'C');
  push(&pilha,'D');
  push(&pilha,top (&pilha));
  pop(&pilha);
  push(&pilha,pop (&pilha));
  pop(&pilha);
  for (i=pilha.topo-1; i>=0; i--)
 { printf("%c\n",pilha.vetor[i]); }

}
