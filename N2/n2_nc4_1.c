#include <stdio.h>

int main() {
    int A = 5;
    int B = 2;

    int soma = A + B;
    int sub = A - B;
    int multi = A * B;
    int div = A / B;

    printf("soma: %d \n", soma);
    printf("sub: %d \n", sub);
    printf("multi: %d \n", multi);
    printf("div: %d \n", div);
    printf("\n");

    float x = 5.5;
    float y = 2.2;

    float soma2 = x + y;
    float sub2 = x - y;
    float multi2 = x * y;
    float div2 = x / y;

    printf("soma2: %.2f \n", soma2);
    printf("sub2: %.2f \n", sub2);
    printf("multi2: %.2f \n", multi2);
    printf("div2: %.2f \n", div2);


}