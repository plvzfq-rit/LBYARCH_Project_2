#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

extern void asmkernel(long long x_length, float* x, float* y);

void ckernel(int x_length, float* x, float* y) {

    int i;
    float holder = 0;
    int min;

    for (i = 0; i < 7; i++) {
        holder = holder + *(x + i);
    }

    *(y) = holder;

    for (i = 7; i < x_length; i++) {
        holder = holder + *(x + i) - *(x + i - 7);
        *(y + i - 6) = holder;
    }

    if (x_length - 6 < 10) {
        min = x_length - 6;
    }
    else {
        min = 10;
    }

    printf("Y array contents:\n");

    for (i = 0; i < min; i++) {
        printf("Y[%d] = %f\n", i, *(y + i));
    }
}

float getrandomfloat() {
    return (float)(rand()) / (float)(rand());
}

int main() {

    long long x_length;
    int i;
    float* x;
    float* y;
    long long temp;
    clock_t start;
    clock_t end;

    x_length = 1073741824;

    x = (float*)malloc(x_length * sizeof(float));

    printf("Generating random values...\n");
    for (i = 0; i < x_length; i++) {
        *(x + i) = (float) i;
    }
    printf("\n");
    printf("Generated values (max 16):\n");
    if (x_length < 16) {
        temp = x_length;
    }
    else {
        temp = 16;
    }
    for (i = 0; i < temp; i++) {
        printf("X[%d] = %f\n", i, *(x + i));
    }
    printf("\n");

    y = (float*)malloc((x_length - 6) * sizeof(float));

    printf("--- Testing C Speed ---\n");
    start = clock();
    ckernel(x_length, x, y);
    end = clock();
    printf("Time taken: %lf", ((double)(end - start)) / CLOCKS_PER_SEC);
    printf("\n");

    for (i = 0; i < x_length - 6; i++) {
        *(y + i) = 0.0;
    }

    printf("\n");

    printf("--- Testing ASM Speed ---\n");
    start = clock();
    asmkernel(x_length, x, y);
    end = clock();
    printf("Time taken: %lf", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}