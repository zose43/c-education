#include <stdio.h>
#include <locale.h>


void sortArray(const int data[], int count);

int main() {
    setlocale(LC_ALL, "Russian");
    const int COUNT = 8;
    int nums[COUNT];

    for (int i = 0; i < COUNT; ++i) {
        if (i == 0) {
            printf("Объем массива: %d \n", COUNT);
        }
        printf("Введите %dе число:\n", i + 1);
        scanf("%d", &nums[i]);
    }

    sortArray(nums, COUNT);

    return 0;
}

void sortArray(const int data[], int count) {
    int multiplication = 1;
    int coupleNums[2];

    for (int i = 0; i < count; i++) {
        if ((multiplication < data[i] * data[i + 1]) && i != count - 1) {
            multiplication = data[i] * data[i + 1];

            coupleNums[0] = data[i];
            coupleNums[1] = data[i + 1];
        }
    }

    printf("Большее произведение у чисел (%d):\n", multiplication);
    int i = sizeof(coupleNums) / sizeof(int) - 1;
    for (; i >= 0; i--) {
        printf("%d\t", coupleNums[i]);
    }
}