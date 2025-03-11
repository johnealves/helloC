#include <stdio.h>

int main() {

    int numero1;
    int numero2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Entre com o numero um: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero dois: \n");
    scanf("%d", &numero2);

    // soma
    soma = numero1 + numero2;

    // subtração
    subtracao = numero1 - numero2;

    // multiplicação15
    multiplicacao = numero1 * numero2;

    // divisão
    divisao = numero1 / numero2;


    printf("A soma dos numeros eh: %d\n", soma);
    printf("A subtracao dos numeros eh: %d\n", subtracao);
    printf("A multiplicacao dos numeros eh: %d\n", multiplicacao);
    printf("A divisao dos numeros eh: %d\n", divisao);

    return 0;

}