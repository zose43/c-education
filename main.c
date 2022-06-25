#include <locale.h>
#include <math.h>
#include <stdio.h>

int getFactorial(int num);

int main() {
    setlocale(LC_ALL, "Russian");

    int i, n;
    double a, result;

    printf("Введите n:\n");
    scanf("%d", &n);

    printf("Введите a:\n");
    scanf("%lf", &a);

    for (i = 1; i <= n; ++i) {
        if (i == 3) {
            printf("Результаты:\n");
        }
        if (i % 3 == 0) {
            result = pow(a, 2 * (i - 1)) / getFactorial(i - 1);
            printf("%lf \n", result);
        }
    }
}

int getFactorial(int num) {
    int i, result = 1;
    for (i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}