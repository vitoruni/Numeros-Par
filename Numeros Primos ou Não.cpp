#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
setlocale(LC_ALL, "Portuguese");

int num, i;
int condicao = 0;

printf("Digite um n�mero: ");
scanf("%d", &num);

for(i = 1; i <= num; i++) {
if(num % i == 0) {
condicao++;
printf("\n%d � divisivel por %d", num, i);
}
}

printf("\n\nCondi��o = %d divisores", condicao);

if(condicao <= 2) {
printf("\n\nO n�mero %d � primo!", num);
}
else {
printf("\n\nO n�mero %d n�o � primo!", num);
}
}
