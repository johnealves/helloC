#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite a sua matricula: ");
    scanf("%d", &matricula);
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("\n\n");

    printf("nome do aluno: %s - matriula: %d \n", nome, matricula);
    printf("idade: %d - altura: %.2f \n", idade, altura);

    printf("\n\n");
    return 0;
}