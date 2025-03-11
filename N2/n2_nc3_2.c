#include <stdio.h>

int main() {

    int numero1, numero2, resultado;

    numero1 = 10;
    resultado = 10;
    printf("O resultado é: %d \n", resultado);

    // resultado = resultado + 20;
    resultado += 20;
    printf("O resultado é: %d \n", resultado);

    // resultado = resultado - numero1;
    resultado -= numero1;
    printf("O resultado é: %d \n", resultado);

    resultado *= 5;
    printf("O resultado é: %d \n", resultado);

    resultado /= 2;
    printf("O resultado é: %d \n", resultado); 

    return 0;
}