#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void initArray(int *data[], int string, int column);

int sortArray(int *data[], int string, int column);

int main() {
    setlocale(LC_ALL, "Russian");
    int **data;
    int string, column, i, k, delIndex;

    printf("Введите количество строк массива и столбцов массива:\n");
    scanf("%d %d", &string, &column);

    data = malloc(sizeof(*data) * string);
    if (data != NULL) {
        for (i = 0; i < column; i++) {
            data[i] = malloc(sizeof(**data) * column);
            if (data[i] == NULL) {
                printf("Некорректно выделилась память\n");
                return 1;
            }
        }

        initArray((int **) data, string, column);
        delIndex = sortArray((int **) data, string, column);

        printf("Массив c удаленной строкой: \n");
        for (i = 0; i < string; ++i) {
            if (i == delIndex) {
                free(data[i]);
                data[i] = NULL;
            }
        }
        for (i = 0; i < string; ++i) {
            for (k = 0; k < column; ++k) {
                if (data[i] != NULL) {
                    printf("%d\t%s", data[i][k], (k == column - 1) ? "\n" : "");
                }
            }
        }

        free(data);
        return 0;
    }

    printf("Некорректно выделилась память\n");
    return 1;
}

void initArray(int *data[], int string, int column) {
    int i, k;
    printf("Получен 2ый массив со следующими данными:\n");

    for (i = 0; i < string; ++i) {
        for (k = 0; k < column; ++k) {
            data[i][k] = rand() % 50;
            printf("%d\t%s", data[i][k], (k == column - 1) ? "\n" : "");
        }
    }
}

int sortArray(int *data[], int string, int column) {
    int i, k, delIndex = 0, result = 0;

    for (i = 0; i < string; ++i) {
        int sum = 0;
        for (k = 0; k < column; ++k) {
            sum += data[i][k];
        }
        if (result < sum) {
            result = sum;
            delIndex = i;
        }
    }

    return delIndex;
}