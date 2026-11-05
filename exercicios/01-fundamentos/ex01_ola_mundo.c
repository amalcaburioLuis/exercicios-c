/* Imprima Olá, mundo! e o seu nome em duas linhas. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Poruguese");

    printf("Olá mundo\n");
    printf("Luís Vinícius\n");
    
    return 0;
}
