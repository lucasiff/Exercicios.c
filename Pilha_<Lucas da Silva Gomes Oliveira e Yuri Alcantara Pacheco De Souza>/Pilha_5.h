#include <stdlib.h>

struct sNo
{
	int n;
	struct sNo* proximo;
};

typedef struct sNo NO;

typedef NO* PILHA;

void init(PILHA* p)
{
	*p=NULL;
}

int empty(PILHA p)
{
	return (p==NULL);
}

void push(PILHA* p, int num)
{
	NO* tmp;
	tmp=(NO*)malloc(sizeof(NO));
	if(tmp==NULL)return;
	tmp->n=num;
	tmp->proximo=*p;
	*p=tmp;
}

int top(PILHA p)
{
	if(empty(p)) return -1;
	return p->n;
}

void pop(PILHA* p)
{
	NO* tmp=*p;
	if(empty(*p))return;
	*p=(*p)->proximo;
	free(tmp);
}

void print(PILHA p){
	if(empty(p))return;
	printf("%d",p->n);
	print(p->proximo);
}
