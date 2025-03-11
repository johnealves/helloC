#include <stdio.h>

int main() {
    // unsigned use para valores positivos
    // int numeroSinal = 3000000000;
    // unsigned int numeroSemSinal = 3000000000;

    // printf("numeroSinal: %d\n", numeroSinal);
    // printf("numeroSemSinal: %u\n", numeroSemSinal);

    // long use para valores grandes, acima de 2.147.483.647
    // int numeroNormal = 214748364;
    // long int numeroLongo = 2147483647;

    // printf("numeroNormal: %d\n", numeroNormal);
    // printf("numeroLongo: %ld\n", numeroLongo);

    // long double use para valores decimais muito precisos
    // double numeroPreciso = 3.14159265358979323846;
    // long double numeroMuitoPreciso = 3.14159265358979323846;

    // printf("numeroPreciso: %.20f\n", numeroPreciso);
    // printf("numeroMuitoPreciso: %.20Lf\n", numeroMuitoPreciso);

    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Numero positivo grande: %lu\n", numeroGrandePositivo);
    printf("Numero positivo: %u\n", numeroPositivo);
    printf("Numero grande: %ld\n", numeroGrande);
    printf("Numero: %d\n", numero);

}