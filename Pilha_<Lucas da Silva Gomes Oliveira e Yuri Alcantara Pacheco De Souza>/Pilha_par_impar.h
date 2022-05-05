#include<stdio.h>
#include<stdlib.h>

typedef int TipoChave;
typedef struct CelulaStr *Apontador;
typedef struct
{
  TipoChave Chave;
} TipoItem;
typedef struct CelulaStr
{
   TipoItem Item;
   Apontador Proximo;
} Celula;
typedef struct
{
   Apontador Fundo, Topo;
   int Tamanho;
}TipoPilha;
void push(TipoItem , TipoPilha *);
void pop(TipoItem *, TipoPilha *);
void FpVazia (TipoPilha *);
void Vazia (TipoPilha);

void FpVazia (TipoPilha *Pilha)
{
   Pilha->Topo=(Apontador)malloc(sizeof(Celula));
   Pilha->Fundo=Pilha->Topo;
   Pilha->Topo->Proximo=NULL;
   Pilha->Tamanho=0;
}

void push(TipoItem x, TipoPilha *Pilha)
{
  Apontador Aux;

 Aux = (Apontador)malloc(sizeof(Celula));
 Pilha->Topo->Item=x;
 Aux->Proximo=Pilha->Topo;
 Pilha->Topo=Aux;
 Pilha->Tamanho++;
}

void Vazia (TipoPilha Pilha)
{
   Pilha.Topo==Pilha.Fundo;
}

void pop(TipoItem *Item, TipoPilha *Pilha)
{
  Apontador Aux;

  Aux = Pilha->Topo;
  Pilha->Topo=Aux->Proximo;
  *Item=Aux->Proximo->Item;
   free(Aux);
  Pilha->Tamanho--;
}
