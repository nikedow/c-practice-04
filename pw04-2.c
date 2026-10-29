#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t a;
    uint8_t b;
    if (scanf("%hhu %hhu", &a, &b) == 2) {
        /*
          без явного приведения типов выражение (a + b) / 2
          выполнило бы целочисленное деление, так как оба операнда целые, и дробная 
          часть была бы отброшена.
          явное приведение (float) переводит сумму в вещественный тип перед делением.
         */
        float result = (float)(a + b) / 2;
        printf("RESULT: %.2f\n", result);
        printf("sizeof(uint8_t) = %llu\n", (unsigned long long)sizeof(uint8_t));
        printf("sizeof(float) = %llu\n", (unsigned long long)sizeof(float));
    }
    return 0;
}