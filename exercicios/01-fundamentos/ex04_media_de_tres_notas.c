/*
Leia três notas (podem ter casa decimal) e mostre a média com 2 casas.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1 = 0, n2 = 0, n3 = 0;
    float m = 0;

    printf("\n--- Notas ---\n");
    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);
    
    printf("Nota 3: ");
    scanf("%f", &n3);

    m = (n1 + n2 + n3) / 3;

    printf("\n--- Resultado ---\n");
    printf("Média: %.2f\n", m);

    return 0;
}
