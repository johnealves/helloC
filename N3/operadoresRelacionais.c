#include <stdio.h>

int main () {

    // > (maior que)
    // < (menor que)
    // >= (maior ou igual a)
    // <= (menor ou igual a)
    // == (igual a)
    // != (diferente de)

    int a = 10;
    int b = 20;
    
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a == b);
    printf("a <= b: %d\n", a != b);

    int c = 5;
    int d = 5.3;
    char letra = 'a';

    printf("c >= d: %d\n", c >= d);
    printf("c == d: %d\n", c == d);
    printf("c != d: %d\n", c != d);

    printf("valor de e: %d\n", letra);

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);



    return 0;
}