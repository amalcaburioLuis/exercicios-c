/*
leia dois números inteiros e troque os valores entre duas variáveis, sem usar uma terceira variável.
Mostre os valores antes e depois da troca.
*/
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 0;
    int b = 0;

    printf("Informe o valor de A: ");
    scanf("%i", &a);
    printf("Informe o valor de B: ");
    scanf("%i", &b);

    printf("\n--- Antes da Troca ---\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n--- Depois da Troca ---\n");
    printf("A = %i\n", a);
    printf("B = %i\n", b);
    return 0;
}
