#include <stdio.h>

int main() {
    int idade = 29;
    float altura = 1.6835894;
    char option = 'S';
    char nome[20] = "João";

    
    printf("A idade do %s é %d\n", nome, idade, altura);
    printf("A altura é %.2f\n", altura);
    printf("A opção é %c\n", option);
    return 0;

    /*
    printf("%format1 %format2, ..., %formatN", var1, var2, ..., varN);

    %d -> int
    %i -> int
    %f -> float
    %e -> float (notação científica)
    %c -> char
    %s -> string

    */
}