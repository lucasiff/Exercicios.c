#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){

struct spilha x;
struct spilha y;
struct spilha z;

int i;

init(&y);
init(&x);
init(&z);

printf("Executando \n\n");

push(&x,'A');
push(&x,'B');
push(&x,'C');
push(&x,'D');
push(&y,pop (&x));
push(&y,pop (&x));
push(&y,pop (&x));
push(&z,pop (&x));
push(&x,pop (&y));
push(&z,pop (&y));
push(&z,pop (&x));
push(&z,pop (&y));

for (i=z.topo-1; i>=0; i--)
 { printf("%c\n",z.vetor[i]); }

}
