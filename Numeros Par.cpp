#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
setlocale(LC_ALL, "Portuguese");

int numeroDigitado;

printf("Digite um n�mero PAR: ");
scanf("%d", &numeroDigitado);

while(numeroDigitado % 2 == 1) {
printf("\nEU PEDI UM N�MERO PAR!!\nDigite novamente:");
scanf("%d", &numeroDigitado);
if(numeroDigitado < 0) {
numeroDigitado = (numeroDigitado * -1);
}
}

printf("\n\nMuito Obrigado! ^^");
}
