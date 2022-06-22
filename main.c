#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double hypotenuse,
            S,
            S_triangle, S_sector;
    int radius,
            P,
            P_triangle, P_sector;

    printf("Введите радиус круга: \n");
    scanf("%d", &radius);

    hypotenuse = pow(radius, 2) + pow(radius, 2);

    P_triangle = (int) sqrt(hypotenuse) + radius + (int) hypotenuse;
    P_sector = M_PI * radius * 0.5;

    S_sector = M_PI * pow(radius, 2) * 0.25;
    S_triangle = 0.5 * pow(radius, 2);

    P = (radius * 4 - P_sector) + P_triangle;
    S = (pow(radius, 2) - S_sector) + S_triangle;

    printf("Общая S фигуры: %lf, Общий P фигуры: %d\n", S, P);
    return 0;
}