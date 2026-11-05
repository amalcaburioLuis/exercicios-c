/* 
Leia dois números inteiros e mostre a soma, a diferença, o produto e o resto da divisão.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1 = 0, num2 = 0;
    
    printf("\n--- Informe  os números ---\n");
    printf("Número 1: ");
    scanf("%i", &num1);

    printf("Número 2: ");
    scanf("%i", &num2);

    int soma = num1 + num2;
    int diferenca = num1 - num2;
    int produto = num1 * num2;
    int restoDivisao = num1  % num2;

    printf("\n--- Operações ---\n");
    printf("Soma: %i + %i =  %i\n", num1, num2, soma);
    printf("Diferença: %i - %i = %i\n", num1, num2, diferenca);
    printf("Produto: %i x %i = %i\n", num1, num2, produto);
    printf("Resto da divisao: %i\n", restoDivisao);

    return 0;
}
