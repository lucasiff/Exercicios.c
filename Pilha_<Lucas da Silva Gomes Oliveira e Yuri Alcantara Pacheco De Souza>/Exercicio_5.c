#include <stdio.h>
#include "Pilha_5.h"

int main(void)
{
	int numero, resto;
	PILHA p;
	init(&p);

	printf("Digite um numero decimal:");
	scanf("%d",&numero);
	while(1)
  {
		if(numero==0)break;
		resto=numero%2;
		numero=numero/2;
		push(&p,resto);
	}
	print(p);
	puts("");
}
