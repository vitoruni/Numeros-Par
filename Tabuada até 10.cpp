#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
setlocale(LC_ALL, "Portuguese");

int tabuada, numeroMaximo, i, resultado;

printf("Voc� quer saber a tabuada de qual n�mero: ");
scanf("%d", &tabuada);

printf("\nVoc� quer que a tabuada v� de 1 at� quanto:");
scanf("%d", &numeroMaximo);

for(i = 1; i <= numeroMaximo; i++) {
resultado = tabuada * i;
printf("\n%d x %d = %d", tabuada, i, resultado);
}

}

