#include <stdio.h>
#include <math.h>
#include <locale.h>

int getFactorial(int num);

int main() {
    setlocale(LC_ALL, "Russian");

    int n = 1;
    double number, sum = 0;

    printf("Введите число:\n");
    scanf("%lf", &number);

    while (sum == number) {
        sum += exp(2 * n + 1) + (double) n / sqrt(getFactorial(n));
        n++;
    }

    return 0;
}

int getFactorial(int num) {
    int i, result = 1;
    for (i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}