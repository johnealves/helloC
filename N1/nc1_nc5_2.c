#include <stdio.h>

int main() {
    int idade = 29;
    float altura = 1.6835894;
    char option = 'S';
    char nome[20] = "João";

    //  sintaxe scanf
    printf("Informe o nome: ");
    scanf("%s", &nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("%s tem %d anos de idade e sua altura é %.2f\n", nome, idade, altura);
    return 0;
}