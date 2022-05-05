#include <stdio.h>
#include <string.h>
#include "Pilha_3.h"

void palindromo() {
  char palavra[MAX];
  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  for (char i = 0; i < strlen(palavra); i++)
    empilhar(palavra[i]);

  printf("Palavra Digitada: %s\n", palavra);
  printf("Palavra inversa: ");
  exibirInversa();

  printf("\n");

  char *resultado = "Eh um Palindromo";
  for (char i = 0; i < strlen(palavra); i++)
    if (palavra[i] != desempilhar())
      resultado = "Nao eh um Palindromo";

  printf("%s\n", resultado);
}

int main() {
  palindromo();
}
