#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    float x;
    double topStatement,
            bottomStatement,
            result,
            sinus;

    printf("Введите переменную: \n");
    scanf("%f", &x);

    sinus = sin(pow((double) (2 * x) + 19.0 / 180 * M_PI, 3));
    topStatement = sinus * pow(M_E, (double) (-2 * x));
    bottomStatement = pow(sqrt(fabs(4 - sqrt(fabs((double) (x - 2) * sin((double) x))))), 3);
    result = topStatement / bottomStatement + 1.0 / 3 * tan((double) x) * log(fabs(pow((double) x, 3))) / M_LN2;

    printf("Результат: %f \n", result);
}