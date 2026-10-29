#include <stdio.h>
#define COEFF 1000
int main(void) {
    int total_mv;
    /*
      при целочисленном делении оба операнда имеют тип int,
      поэтому процессор выполняет целочисленную операцию деления и отбрасывает дробную часть в сторону нуля.
      Остаток вычисляется с помощью целочисленного оператора
     */
    while (scanf("%d", &total_mv) == 1 && total_mv > 0) {
        int v = total_mv / COEFF;
        int mv = total_mv % COEFF;
        printf("%d мВ = %d В %d мВ\n", total_mv, v, mv);
    }
    return 0;
}