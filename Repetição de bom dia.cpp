#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
setlocale(LC_ALL, "Portuguese");
int num, i;

printf("Digite um n�mero: ");
scanf("%d", &num);

for(i; i < num; i++) {
printf("\n [%d] Bom dia!!", i + 1);
}
}

