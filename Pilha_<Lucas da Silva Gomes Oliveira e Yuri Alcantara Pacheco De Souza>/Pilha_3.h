#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
  int topo;
  char letras[MAX];
} Pilha;

Pilha pilha;

void inicializa() {
  pilha.topo = 0;
}

void empilhar(char letra) {
  pilha.letras[pilha.topo] = letra;
  pilha.topo++;
}

char desempilhar() {
  pilha.topo--;
  return pilha.letras[pilha.topo];
}

void exibirInversa() {
  for (int i = pilha.topo - 1; i >= 0; i--)
    printf("%c", pilha.letras[i]);
}
