#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;

    float result = a + b;

    printf("result: %.2f \n", result);
    printf("\n");

    int c = 10;
    float d = 3;
    float result2 = (float) c / d; // c é explicitamente convertido para float

    return 0;
}