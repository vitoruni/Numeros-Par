#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main() {
setlocale(LC_ALL, "Portuguese");

int inicio, fim;

printf("Digite o início: ");
scanf("%d", &inicio);

printf("Digite o fim: ");
scanf("%d", &fim);

for(inicio; inicio <= fim; inicio++) {
if(inicio % 2 == 1) {
printf("\n%d", inicio);
}
}
}

