/*
Declare variáveis para seu nome (pense: como guardar texto em C?), idade, 
altura e inicial do sobrenome.

Imprima tudo numa frase só, por exemplo: Luís, 18 anos, 1.75 m, inicial L.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int idade = 0;
    float altura = 0.0;
    char inicialSobrenome;

    printf("Qual o seu nome: ");
    scanf("%s", nome);

    printf("\nQual a sua idade: ");
    scanf("%i", &idade);

    printf("\nQual a sua altura: ");
    scanf("%f", &altura);

    printf("\nQual a inicial do seu sobrenome: ");
    scanf(" %c", &inicialSobrenome);

    printf("\nDados: | Nome: %s | Idade: %i | Altura: %.2f | Inicial do Sobrenome: %c\n", nome, idade, altura, inicialSobrenome);

    return 0;
}
