#include <stdio.h>

int main () {
    char produtoA[30] = "Feijão";
    char produtoB[30] = "Arroz";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.5;
    float valorB = 20.4;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    int resultadoA, resultadoB;

    // Exibir informaçoes dos Produtos
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);
    printf("\n");

    // Comparaçao com o valor e estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto %s tem estoque suficiente? %d\n", produtoA, resultadoA);
    printf("Produto %s tem estoque suficiente? %d\n", produtoB, resultadoB);
    printf("\n");

    // Comparaçao com o valores totais dos produtos
    float totalA = estoqueA * valorA;
    float totalB = estoqueB * valorB;
    printf("Valor total de A (R$ %.2f)é maior que o valor total de B (R$ %.2f) %d: \n", totalA, totalB, (estoqueA * valorA) > (estoqueB * valorB));
}