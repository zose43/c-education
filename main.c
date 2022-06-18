#include <stdio.h>
#include <math.h>

int main() {

    float x, y, radius;
    int count, i;

    printf("Type dots count: \n");
    scanf("%d", &count);

    if (count > 1) {

        printf("radius: \n");
        scanf("%f", &radius);

        for (i = 0; i < count; i++) {
            printf("x: \n");
            scanf("%f", &x);

            printf("y: \n");
            scanf("%f", &y);

            if (((x > -radius) && (y > -radius) && (pow(x, 2) + pow(y, 2) > pow(radius, 2))) ||
                (y < 0) && (x > 0) && (y - x > -radius)) {
                printf("Success\n");
            } else {
                printf("Failed\n");
            }
        }
    } else {
        if (((x > -radius) && (y > -radius) && (pow(x, 2) + pow(y, 2) > pow(radius, 2))) ||
            (y < 0) && (x > 0) && (y - x > -radius)) {
            printf("Success");
        } else {
            printf("Failed");
        }
    }

    return 0;
}