#include <stdio.h>
double kw_to_w(double kw) {
    const double COEFF = 1000.0;
    return kw * COEFF;
}
int main(void) {
    double kw;
    /*
     1. Функция принимает double, так как он обеспечивает 15-17 значащих цифр точности 
     (против 7 у float) и является стандартом для вещественных вычислений в C.
     2. Проверка scanf(...) == 1 гарантирует, что считано именно число. Если пользователь 
     введет некорректный символ (букву) или нажмет Ctrl+D (EOF), scanf вернет 0 или -1,
     что тут же прервет цикл while и предотвратит бесконечное зацикливание программы.
     */
    while (scanf("%lf", &kw) == 1) {
        double w = kw_to_w(kw);
        printf("%.2f kW = %.2f W\n", kw, w);
    }
    return 0;
}