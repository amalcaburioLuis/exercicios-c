/*
Leia uma temperatura em Celsius e mostre em Fahrenheit e em Kelvin.
Fórmulas: F = C × 9/5 + 32 e K = C + 273.15.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int C = 0;
    int F = 0;
    float K = 0.0;

    printf("\nTemperatura em celcius: ");
    scanf("%i", &C);

    F = C * (9/5) + 32;
    K = C + 273.15;

    printf("\n--- Conversão ---\n");
    printf("Celcius: %iºC\n", C);
    printf("Fahrenheit: %iºF\n", F);
    printf("Kelvin: %.2fºK\n", K);
    return 0;
}
