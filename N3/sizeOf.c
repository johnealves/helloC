#include <stdio.h>

int main () {
    printf("Tamanho de um char: %ld bytes\n", sizeof(char));
    printf("Tamanho do short in: %lu\n", sizeof(short int));
    printf("Tamanho de um int: %ld bytes\n", sizeof(int));
    printf("Tamanho de um long int: %ld bytes\n", sizeof(long int));
    printf("Tamanho de um long long int: %ld bytes\n", sizeof(long long int));
    printf("Tamanho de um float: %ld bytes\n", sizeof(float));
    printf("Tamanho de um double: %ld bytes\n", sizeof(double));
    printf("Tamanho de um long double: %ld bytes\n", sizeof(long double));

}