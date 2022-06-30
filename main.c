#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double S, P, radius;

    printf("Введите радиус круга: \n");
    scanf("%lf", &radius);

    S = M_PI * pow(radius, 2) / 4;
    P = pow(sqrt(pow(radius, 2) * pow(radius, 2)) + radius, 2) + 0.5 * M_PI * radius;
    printf("Общая S фигуры: %lf, Общий P фигуры: %lf\n", S, P);

    return 0;
}