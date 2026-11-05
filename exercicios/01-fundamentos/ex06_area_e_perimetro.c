/*
Objetivo: usar constantes e double.

Leia o raio de um círculo e mostre a área (π × r²) e o perímetro (2 × π × r).
*/
#include<stdio.h>
#include<locale.h>

const double PI = 3.14159;

int main(){
    setlocale(LC_ALL, "Portuguese");
    float raio = 0;
    float area = 0, perimetro = 0;

    printf("\nInforme o raio de um círculo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    perimetro = 2 * PI * raio;

    printf("\n--- Resultados ---\n");
    printf("Raio: %.2f\n", raio);
    printf("Área: %f\n", area);
    printf("Perímetro: %fl\n", perimetro);

    return 0;
}
