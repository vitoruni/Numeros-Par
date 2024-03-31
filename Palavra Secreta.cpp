#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
setlocale(LC_ALL, "Portuguese");

char palavraSecreta[20], chutePalavra[20];

printf("[JOGADOR 1]:\nDigite a palavra secreta: ");
scanf("%[^\n]", &palavraSecreta);

printf("\nA palavra secreta é: %s", palavraSecreta);
}
